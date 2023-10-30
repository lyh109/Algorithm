#include <bits/stdc++.h>
using namespace std;

int a[10000001];
bool occur[2000001];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, x;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	cin >> x;

	int ans = 0;
	for (int i = 0; i < N; ++i)
	{
		if(x - a[i] > 0 && occur[x - a[i]]) ++ans;
		occur[a[i]] = true;
	}

	cout << ans;

	return 0;
}