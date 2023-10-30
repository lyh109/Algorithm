#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int mul = a * b * c;

	int numcount[10]{};

	while (true)
	{
		++numcount[mul % 10];
		mul /= 10;

		if (mul == 0)
			break;
	}

	for (int i = 0; i < 10; ++i)
		cout << numcount[i] << endl;
}