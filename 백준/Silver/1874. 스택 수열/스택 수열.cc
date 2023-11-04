#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	stack<int> S;
	string result;
	int maxNum = 0;

	while (N--)
	{
		int i;
		cin >> i;

		if (i > maxNum)
		{
			for (int j = maxNum + 1; j <= i; ++j)
			{
				S.push(j);
				result += '+';
			}

			S.pop();
			maxNum = i;
			result += '-';
		}
		else if (i == S.top())
		{
			S.pop();
			result += '-';
		}
		else
		{
			cout << "NO" << '\n';
			return 0;
		}
	}

	for(char c : result)
		cout << c << '\n';

	return 0;
}