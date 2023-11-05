#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	string a;
	cin >> a;

	int count = 0;

	stack<char> s;
	for (size_t i = 0; i < a.size(); ++i)
	{
		if (a[i] == '(')
		{
			s.push(a[i]);
		}
		else
		{
			if (a[i - 1] == '(')
			{
				s.pop();
				count += s.size();
			}
			else
			{
				s.pop();
				++count;
			}
		}
	}

	cout << count;

	return 0;
}