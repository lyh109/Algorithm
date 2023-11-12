#include <bits/stdc++.h>
using namespace std;

int board[51][51];
bool visited[51][51];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t, m, n, k;
	cin >> t;

	while (t--)
	{
		cin >> m >> n >> k;

		queue<pair<int, int>> q;
		int count = 0;

		for (int i = 0; i < k; ++i)
		{
			int a, b;
			cin >> a >> b;
			board[b][a] = 1;
		}

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if(visited[i][j] || board[i][j] == 0) continue;

				visited[i][j] = true;
				q.push({i, j});
				++count;

				while (!q.empty())
				{
					pair<int, int> cur = q.front(); q.pop();
					for (int dir = 0; dir < 4; ++dir)
					{
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];

						if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						if(visited[nx][ny] || board[nx][ny] == 0) continue;

						visited[nx][ny] = true;
						q.push({nx, ny});
					}
				}
			}
		}

		cout << count << '\n';
		
		for (int i = 0; i < n; ++i)
		{
			fill(visited[i], visited[i] + m, false);
			fill(board[i], board[i] + m, 0);
		}
	}

	return 0;
}