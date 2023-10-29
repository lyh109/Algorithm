#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int number[5];
	int average = 0;

	for (int i = 0; i < 5; ++i)
	{
		cin >> number[i];
		average += number[i];
	}

	sort(number, number + 5);

	cout << average / 5 << '\n' << number[2] << '\n';

	return 0;
}