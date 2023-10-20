#include <iostream>
#include <vector>

using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;
static int result = 0;

void DFS(int num);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	A.resize(N);
	visited = vector<bool>(N, false);

	for (int i = 0; i < M; ++i)
	{
		int s, e;
		cin >> s >> e;

		A[s - 1].push_back(e - 1);
		A[e - 1].push_back(s - 1);
	}

	for (int i = 0; i < N; ++i)
	{
		if (!visited[i])
		{
			DFS(i);
			++result;
		}
	}
	
	cout << result << '\n';
	return 0;
}

void DFS(int num)
{
	if (visited[num])
	{
		return;
	}

	visited[num] = true;

	for (int i : A[num])
	{
		DFS(i);
	}
}