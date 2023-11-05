#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	string a;
	cin >> a;

	int result = 0;
	int mul = 1;
	stack<char> s;

	for (size_t i = 0; i < a.size(); ++i)
	{
		if (a[i] == '(')
		{
			mul *= 2;
			s.push(a[i]);
		}
		else if (a[i] == '[')
		{
			mul *= 3;
			s.push(a[i]);
		}
		else if (a[i] == ')')
		{
			if (s.empty() || s.top() != '(')
			{
				cout << 0;
				return 0;
			}
			
			if(a[i - 1] == '(') result += mul;
			s.pop();
			mul /= 2;
		}
		else if (a[i] == ']')
		{
			if (s.empty() || s.top() != '[')
			{
				cout << 0;
				return 0;
			}

			if (a[i - 1] == '[') result += mul;
			s.pop();
			mul /= 3;
		}
	}

	if(s.empty()) cout << result;
	else cout << 0;

	return 0;
}