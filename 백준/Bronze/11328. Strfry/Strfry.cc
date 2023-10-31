#include <bits/stdc++.h>
using namespace std;

int alpha[26];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	bool isPossible = true;

	for (int i = 0; i < N; ++i)
	{
		string s1, s2;
		cin >> s1 >> s2;

		for (int j = 0; j < s1.size(); ++j)
		{
			++alpha[s1[j] - 'a'];
		}
		
		for (int j = 0; j < s2.size(); ++j)
		{
			--alpha[s2[j] - 'a'];
		}

		for (int k = 0; k < 26; ++k)
		{
			if (alpha[k] != 0)
			{
				isPossible = false;
				break;
			}
		}

		if (isPossible)
		{
			cout << "Possible" << '\n';
		}
		else
		{
			cout << "Impossible" << '\n';
		}
		
		isPossible = true;
		fill(alpha, alpha + 26, 0);
	}

	return 0;
}