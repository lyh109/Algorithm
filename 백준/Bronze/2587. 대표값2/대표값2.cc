#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	multiset<int> number[5];
	int average = 0;

	for (int i = 0; i < 5; ++i)
	{
		int n;
		cin >> n;
		number->insert(n);
	}

	for (auto it = number->begin(); it != number->end(); ++it)
	{
		average += *it;
	}

	cout << average / 5 << '\n' << *(++++number->begin()) << '\n';

	return 0;
}