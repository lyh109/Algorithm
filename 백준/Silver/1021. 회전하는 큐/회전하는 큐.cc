#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M, count = 0;
	cin >> N >> M;

	deque<int> DQ;
	for (int i = 1; i <= N; ++i)
	{
		DQ.push_back(i);
	}

	while (M--)
	{
		int popNumber;
		cin >> popNumber;

		int idx = find(DQ.begin(), DQ.end(), popNumber) - DQ.begin();
		while (DQ.front() != popNumber)
		{
			if (idx < DQ.size() - idx)
			{
				DQ.push_back(DQ.front());
				DQ.pop_front();
			}
			else
			{
				DQ.push_front(DQ.back());
				DQ.pop_back();
			}

			++count;
		}

		DQ.pop_front();
	}

	cout << count;

	return 0;
}