#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s;
	cin >> s;

	list<char> L;
	for (char c : s)
	{
		L.push_back(c);
	}

	list<char>::iterator cursor = L.end();
	int M;
	cin >> M;

	for (int i = 0; i < M; ++i)
	{
		char command;
		cin >> command;

		if (command == 'L')
		{
			if (cursor != L.begin())
			{
				--cursor;
			}
		}
		else if (command == 'D')
		{
			if (cursor != L.end())
			{
				++cursor;
			}
		}
		else if (command == 'B')
		{
			if (cursor != L.begin())
			{
				--cursor;
				cursor = L.erase(cursor);
			}
		}
		else if (command == 'P')
		{
			char alpha;
			cin >> alpha;
			L.insert(cursor, alpha);
		}
	}

	for (char c : L)
	{
		cout << c;
	}

	return 0;
}