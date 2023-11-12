#include <bits/stdc++.h>
using namespace std;

string board[102];
bool visited[102][102];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int n;

int BFS()
{
	queue<pair<int, int>> q;
	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (visited[i][j]) continue;

			visited[i][j] = true;
			q.push({ i, j });
			++ans;

			while (!q.empty())
			{
				pair<int, int> cur = q.front(); q.pop();
				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
					if (visited[nx][ny] || board[nx][ny] != board[cur.first][cur.second]) continue;

					visited[nx][ny] = true;
					q.push({ nx, ny });
				}
			}
		}
	}

	return ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> board[i];

	int count1 = BFS();

	for(int i = 0; i < n; ++i)
		fill(visited[i], visited[i] + n, false);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(board[i][j] == 'R') board[i][j] = 'G';
		}
	}

	int count2 = BFS();

	cout << count1 << ' ' << count2;
	return 0;
}