#include <bits/stdc++.h>
using namespace std;

int board[502][502];
bool visited[502][502];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;

	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j)
			cin >> board[i][j];

	queue<pair<int, int>> q;
	
	int num = 0;
	int maxArea = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(visited[i][j] || board[i][j] == 0) continue;

			++num;
			q.push({i, j});
			visited[i][j] = true;

			int area = 0;

			while (!q.empty())
			{
				pair<int, int> cur = q.front(); q.pop();
				++area;

				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if(visited[nx][ny] || board[nx][ny] == 0) continue;

					q.push({nx, ny});
					visited[nx][ny] = true;
				}
			}

			if(area > maxArea) maxArea = area;
		}
	}
	cout << num << '\n' << maxArea;

	return 0;
}