#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;

	while (T--)
	{
		string p, tc;
		int n;
		cin >> p;
		cin >> n;
		cin >> tc;

		deque<int> dq;

		int num = 0;
		for (size_t i = 1; i < tc.size() - 1; ++i)
		{
			if (tc[i] == ',')
			{
				dq.push_back(num);
				num = 0;
			}
			else
			{
				num = num * 10 + (tc[i] - '0');
			}
		}

		if(num != 0) dq.push_back(num);

		bool isReversed = false, isError = false;

		for (size_t i = 0; i < p.size(); ++i)
		{
			if(p[i] == 'R')	isReversed = !isReversed;
			else
			{
				if (dq.empty())
				{
					isError = true;
					break;
				}
				else
				{
					if(isReversed) dq.pop_back();
					else dq.pop_front();
				}
			}
		}

		if(isError) cout << "error" << '\n';
		else
		{
			if(isReversed) reverse(dq.begin(), dq.end());

			cout << '[';
			for (size_t i = 0; i < dq.size(); ++i)
			{
				cout << dq[i];
				if(i < dq.size() - 1)
					cout << ',';
			}
			cout << ']' << '\n';
		}
	}

	return 0;
}