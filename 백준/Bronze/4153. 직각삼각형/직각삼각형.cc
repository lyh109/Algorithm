#include <iostream>
#include <algorithm>

using namespace std;

static int triangle[3];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	while (true)
	{
		cin >> triangle[0] >> triangle[1] >> triangle[2];

		if(triangle[0] == 0 && triangle[1] == 0 && triangle[2] == 0)
			break;
		
		sort(triangle, triangle + 3);

		if (triangle[0] * triangle[0] + triangle[1] * triangle[1] == triangle[2] * triangle[2])
		{
			cout << "right" << '\n';
		}
		else
		{
			cout << "wrong" << '\n';
		}
	}

	return 0;
}