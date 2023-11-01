#include <bits/stdc++.h>
using namespace std;

int alpha[26];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s1, s2;
	cin >> s1 >> s2;

	for (int i = 0; i < s1.size(); ++i)
	{
		++alpha[s1[i] - 'a'];
	}

	for (int i = 0; i < s2.size(); ++i)
	{
		--alpha[s2[i] - 'a'];
	}

	for (int i = 0; i < 26; ++i)
	{
		alpha[i] = abs(alpha[i]);
	}

	cout << accumulate(alpha, alpha + 26, 0);

	return 0;
}