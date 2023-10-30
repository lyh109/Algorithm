#include <bits/stdc++.h>
using namespace std;

int student[6][2];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; ++i)
	{
		int s, g;
		cin >> s >> g;

		++student[g - 1][s];
	}

	int room = 0;
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			room += (student[i][j] + (K - 1)) / K;
		}
	}

	cout << room;

	return 0;
}