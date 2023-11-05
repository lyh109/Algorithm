#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	deque<int> DQ;

	while (N--)
	{
		string op;
		cin >> op;

		if (op == "push_front")
		{
			int i;
			cin >> i;
			DQ.push_front(i);
		}
		else if (op == "push_back")
		{
			int i;
			cin >> i;
			DQ.push_back(i);
		}
		else if (op == "pop_front")
		{
			if(DQ.empty()) cout << -1 << '\n';
			else
			{
				cout << DQ.front() << '\n';
				DQ.pop_front();
			}
		}
		else if (op == "pop_back")
		{
			if (DQ.empty()) cout << -1 << '\n';
			else
			{
				cout << DQ.back() << '\n';
				DQ.pop_back();
			}
		}
		else if (op == "size")
		{
			cout << DQ.size() << '\n';
		}
		else if (op == "empty")
		{
			cout << DQ.empty() << '\n';
		}
		else if (op == "front")
		{
			if (DQ.empty()) cout << -1 << '\n';
			else cout << DQ.front() << '\n';
		}
		else if (op == "back")
		{
			if (DQ.empty()) cout << -1 << '\n';
			else cout << DQ.back() << '\n';
		}
	}

	return 0;
}