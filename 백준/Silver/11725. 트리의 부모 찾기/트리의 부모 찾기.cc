#include <iostream>
#include <vector>

using namespace std;

static vector<vector<int>> A;
static vector<int> parent;

void DFS(int n);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	
	A.resize(N + 1);
	parent.resize(N);

	for (int i = 0; i < N - 1; ++i)
	{
		int s, e;
		cin >> s >> e;

		A[s].push_back(e);
		A[e].push_back(s);
	}

	DFS(1);

	for (int i = 1; i < parent.size(); ++i)
	{
		cout << parent[i] << '\n';
	}

	return 0;
}

void DFS(int n)
{
	for (int i : A[n])
	{
		if (parent[i - 1] == 0)
		{
			parent[i - 1] = n;
			DFS(i);
		}
	}
}