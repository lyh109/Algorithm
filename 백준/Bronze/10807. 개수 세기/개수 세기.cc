#include <bits/stdc++.h>
using namespace std;

int num[201];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, v;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int n;
		cin >> n;
		++num[n + 100];
	}

	cin >> v;
	cout << num[v + 100];

	return 0;
}