#include <bits/stdc++.h>
using namespace std;

int board[302][302];
int dist[302][302];

int dx[8] = { 2, 2, 1, -1, -2, -2, -1, 1 };
int dy[8] = { 1, -1, -2, -2, -1, 1, 2, 2 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t, n, x, y, xx, yy;
	queue<pair<int, int>> q;
	cin >> t;

	while (t--)
	{
		cin >> n;
		for(int i = 0; i < n; ++i) fill(dist[i], dist[i] + n, -1);

		cin >> x >> y;
		dist[x][y] = 0;
		q.push({x, y});

		cin >> xx >> yy;

		while (!q.empty())
		{
			pair<int, int> cur = q.front(); q.pop();

			for (int dir = 0; dir < 8; ++dir)
			{
				int nx = cur.first + dx[dir];
				int ny = cur.second + dy[dir];

				if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
				if(dist[nx][ny] > -1) continue;

				dist[nx][ny] = dist[cur.first][cur.second] + 1;
				q.push({nx, ny});
			}
		}

		cout << dist[xx][yy] << '\n';
	}

	return 0;
}