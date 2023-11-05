#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	while (true)
	{
		string s;
		getline(cin, s);
		if(s == ".") break;

		stack<char> sc;
		bool isFailed = false;

		for (size_t i = 0; i < s.size(); ++i)
		{
			if (s[i] == '(' || s[i] == '[') sc.push(s[i]);
			else if (s[i] == ')')
			{
				if (sc.empty() || sc.top() != '(')
				{
					isFailed = true;
					break;
				}

				sc.pop();
			}
			else if (s[i] == ']')
			{
				if (sc.empty() || sc.top() != '[')
				{
					isFailed = true;
					break;
				}
				
				sc.pop();
			}
		}

		if(!sc.empty()) isFailed = true;

		if (isFailed) cout << "no" << '\n';
		else cout << "yes" << '\n';
	}

	return 0;
}