#include <iostream>
#include <vector>

using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;
static int result = 0;

void DFS(int);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

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

	DFS(0);
	cout << result - 1;
}

void DFS(int computer)
{
	if (visited[computer])
	{
		return;
	}

	visited[computer] = true;
	++result;

	for (int i : A[computer])
	{
		DFS(i);
	}
}