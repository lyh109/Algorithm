#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N, count = 0;
	cin >> N;

	while (N--)
	{
		string a;
		cin >> a;

		stack<char> s;
		for (char c : a)
		{
			if(s.empty()) s.push(c);
			else
			{
				if(c == s.top()) s.pop();
				else s.push(c);
			}
		}

		if(s.empty()) ++count;
	}

	cout << count;
	return 0;
}