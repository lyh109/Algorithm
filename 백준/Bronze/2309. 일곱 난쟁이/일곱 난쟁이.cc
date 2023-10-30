#include <bits/stdc++.h>
using namespace std;

int num[9], result[7];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int total = 0;
	
	for (int i = 0; i < 9; ++i)
	{
		cin >> num[i];
		total += num[i];
	}

	for (int a = 0; a < 8; ++a)
	{
		for (int b = a + 1; b < 9; ++b)
		{
			if (total - num[a] - num[b] == 100)
			{
				for (int c = 0, i = 0; c < 9; ++c)
				{
					if(c == a || c == b)
						continue;
					result[i++] = num[c];
				}
			}
		}
	}

	sort(result, result + 7);
	for(int i = 0; i < 7; ++i) cout << result[i] << '\n';
	
	return 0;
}