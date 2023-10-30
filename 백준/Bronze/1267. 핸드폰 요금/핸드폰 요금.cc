#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;

	int Y = 0, M = 0;

	for (int i = 0; i < N; ++i)
	{
		int tell;
		cin >> tell;

		Y += (1 + tell / 30) * 10;
		M += (1 + tell / 60) * 15;
	}

	if(Y > M) cout << "M " << M;
	else if(Y < M) cout << "Y " << Y;
	else cout << "Y M " << Y;

	return 0;
}