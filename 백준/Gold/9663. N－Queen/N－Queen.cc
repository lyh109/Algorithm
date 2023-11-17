#include <bits/stdc++.h>
using namespace std;

int n;
int cnt;

bool isUsed1[40];
bool isUsed2[40];
bool isUsed3[40];

void func(int k)
{
	if (k == n)
	{
		++cnt;
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		if (!isUsed1[i] && !isUsed2[i + k] && !isUsed3[k - i + n - 1])
		{
			isUsed1[i] = true;
			isUsed2[i + k] = true;
			isUsed3[k - i + n - 1] = true;

			func(k + 1);

			isUsed1[i] = false;
			isUsed2[i + k] = false;
			isUsed3[k - i + n - 1] = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	func(0);

	cout << cnt;

	return 0;
}