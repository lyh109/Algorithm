#include <iostream>

using namespace std;

static int N;

void DFS(int number, int jarisu);
bool IsPrime(int number);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	DFS(2, 1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);

	return 0;
}

void DFS(int number, int jarisu)
{
	if (jarisu == N)
	{
		if (IsPrime(number))
		{
			cout << number << "\n";
		}

		return;
	}

	for (int i = 1; i <= 9; i += 2)
	{
		if (IsPrime(number * 10 + i))
		{
			DFS(number * 10 + i, jarisu + 1);
		}
	}
}

bool IsPrime(int number)
{
	for (int i = 2; i < number / 2; ++i)
	{
		if(number % i == 0)
		{
			return false;
		}
	}

	return true;
}