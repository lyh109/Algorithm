#include <bits/stdc++.h>
using namespace std;

int board[102][102];
bool visited[102][102];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int m, n, k;
	cin >> n >> m >> k;

	for (int i = 0; i < k; ++i)
	{
		int x1, y1, x2, y2;
		cin >> y1 >> x1 >> y2 >> x2;

		for (int j = x1; j < x2; ++j)
		{
			for (int k = y1; k < y2; ++k)
			{
				board[j][k] = 1;
			}
		}
	}
    
	vector<int> areas;
	queue<pair<int, int>> q;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(board[i][j] == 1 || visited[i][j]) continue;

			visited[i][j] = true;
			q.push({i, j});

			int area = 0;
			while (!q.empty())
			{
				pair<int, int> cur = q.front(); q.pop();
				++area;

				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];

					if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if(visited[nx][ny] || board[nx][ny] == 1) continue;

					visited[nx][ny] = true;
					q.push({nx, ny});
				}
			}

			areas.push_back(area);
		}
	}

	sort(areas.begin(), areas.end());
	cout << areas.size() << '\n';
	for(int i : areas) cout << i << ' ';

	return 0;
}