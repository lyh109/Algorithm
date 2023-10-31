#include <bits/stdc++.h>
using namespace std;

static vector<vector<int>> a;
static vector<int> visited;
static int order = 1;

void DFS(int start);

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M, R;
	cin >> N >> M >> R;
	
	visited = vector<int>(N, 0);
	
	a.resize(N);
	for (int i = 0; i < M; ++i)
	{
		int s, e;
		cin >> s >> e;

		a[s - 1].push_back(e - 1);
		a[e - 1].push_back(s - 1);
	}

	for (int i = 0; i < N; ++i)
	{
		sort(a[i].begin(), a[i].end());
	}

	DFS(R - 1);

	for (int i : visited)
	{
		cout << i << '\n';
	}

	return 0;
}

void DFS(int start)
{
	visited[start] = order++;

	for (int i : a[start])
	{
		if (visited[i] == false)
		{
			DFS(i);
		}
	}
}