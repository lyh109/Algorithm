#include <bits/stdc++.h>
using namespace std;

int arr[22];
int n, s;
int cnt;

void func(int k, int sum)
{
	if (k == n)
	{
		if (sum == s) ++cnt;
		return;
	}
	

	func(k + 1, sum);
	func(k + 1, sum + arr[k]);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> s;
	for(int i = 0; i < n; ++i)
		cin >> arr[i];

	func(0, 0);
	if(s == 0) --cnt;

	cout << cnt;

	return 0;
}