#include <bits/stdc++.h>
using namespace std;

string board[27];
bool visited[27][27];

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> board[i];

	queue<pair<int, int>> q;
	vector<int> houseNum;
	int num = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(visited[i][j] || board[i][j] == '0') continue;

			visited[i][j] = true;
			q.push({i, j});
			++num;
			
			int house = 1;
			while (!q.empty())
			{
				pair<int, int> cur = q.front(); q.pop();

				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];

					if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
					if(visited[nx][ny] || board[nx][ny] == '0') continue;

					visited[nx][ny] = true;
					q.push({nx, ny});
					++house;
				}
			}

			houseNum.push_back(house);
		}
	}

	cout << num << '\n';
	sort(houseNum.begin(), houseNum.end());
	for(int i : houseNum)
		cout << i << '\n';

	return 0;
}