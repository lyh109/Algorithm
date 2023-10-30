#include <bits/stdc++.h>
using namespace std;

int num[10];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	while (N > 0)
	{
		++num[N % 10];
		N /= 10;
	}

	int ans = 0;
	for (int i = 0; i < 10; ++i)
	{
		if(i == 6 || i == 9) continue;
		ans = max(ans, num[i]);
	}

	ans = max(ans, (num[6] + num[9] + 1) / 2);
	cout << ans;

	return 0;
}