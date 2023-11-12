#include <bits/stdc++.h>
using namespace std;

int board[102][102][102];
int dist[102][102][102];

int dx[6] = { 0, 0, 1, -1, 0, 0 };
int dy[6] = { 1, -1, 0, 0, 0, 0 };
int dz[6] = { 0, 0, 0, 0, 1, -1 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int m, n, h;
	cin >> m >> n >> h;

	queue<tuple<int, int, int>> q;
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < m; ++k)
			{
				int tomato;
				cin >> tomato;
				board[j][k][i] = tomato;

				if(tomato == 1) q.push({j, k, i});
				if(tomato == 0) dist[j][k][i] = -1;
			}
		}
	}

	while (!q.empty())
	{
		tuple<int, int, int> cur = q.front(); q.pop();

		int curX, curY, curZ;
		tie(curX, curY, curZ) = cur;

		for (int dir = 0; dir < 6; ++dir)
		{
			int nx = curX + dx[dir];
			int ny = curY + dy[dir];
			int nz = curZ + dz[dir];

			if(nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h) continue;
			if(dist[nx][ny][nz] > -1) continue;
			
			dist[nx][ny][nz] = dist[curX][curY][curZ] + 1;
			q.push({nx, ny, nz});
		}
	}

	int ans = 0;
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < m; ++k)
			{
				if (dist[j][k][i] == -1)
				{
					cout << -1;
					return 0;
				}

				ans = max(ans, dist[j][k][i]);
			}
		}
	}

	cout << ans;
	return 0;
}