#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<vector<int>> yut;
	yut.resize(3);

	for (int i = 0; i < 3; ++i)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		yut[i].push_back(a);
		yut[i].push_back(b);
		yut[i].push_back(c);
		yut[i].push_back(d);
	}

	for (int i = 0; i < 3; ++i)
	{
		int count = 0;
		for (int j : yut[i])
		{
			count += j;
		}

		if(count == 0) cout << 'D' << '\n';
		else if(count == 1) cout << 'C' << '\n';
		else if(count == 2) cout << 'B' << '\n';
		else if(count == 3) cout << 'A' << '\n';
		else if(count == 4) cout << 'E' << '\n';
	}

	return 0;
}