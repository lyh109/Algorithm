#include <bits/stdc++.h>
using namespace std;

int n, m;
int num[10];
int arr[10];
bool isUsed[10001];

void func(int k)
{
	if (k == m)
	{
		for(int i = 0; i < m; ++i)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		if(isUsed[num[i]]) continue;
		arr[k] = num[i];
		isUsed[num[i]] = true;
		func(k + 1);
		isUsed[num[i]] = false;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for(int i = 0; i < n; ++i)
		cin >> num[i];
	sort(num, num + n);

	func(0);

	return 0;
}