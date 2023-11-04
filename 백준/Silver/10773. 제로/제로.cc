#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	stack<int> S;

	while (N--)
	{
		int i;
		cin >> i;

		if (i == 0) S.pop();
		else S.push(i);
	}

	int sum = 0;
	while (!S.empty())
	{
		sum += S.top();
		S.pop();
	}
	
	cout << sum;

	return 0;
}