#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int number[7];
	int result = 0;
	int minNumber = 101;

	for (int i = 0; i < 7; ++i)
	{
		cin >> number[i];
		if (number[i] % 2 == 1)
		{
			result += number[i];
			if (number[i] < minNumber)
			{
				minNumber = number[i];
			}
		}
	}

	if (result == 0)
	{
		cout << -1 << '\n';
	}
	else
	{
		cout << result << '\n' << minNumber << '\n';
	}
	
	return 0;
}