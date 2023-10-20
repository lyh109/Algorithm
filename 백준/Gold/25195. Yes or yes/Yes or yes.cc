#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

static vector<vector<int>> A;
static vector<int> gomgom;
static bool meet = true;

void DFS(int pos);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	A.resize(N);

	for (int i = 0; i < M; ++i)
	{
		int s, e;
		cin >> s >> e;

		A[s - 1].push_back(e - 1);
	}

	int s;
	cin >> s;
	gomgom.resize(s);

	for (int i = 0; i < s; ++i)
	{
		int gom;
		cin >> gom;
		gomgom[i] = gom - 1;
	}

	DFS(0);

	if(meet) cout << "Yes" << '\n';
	else cout << "yes" << '\n';

	return 0;
}

void DFS(int pos)
{
	if (!meet || find(gomgom.begin(), gomgom.end(), pos) != gomgom.end())
	{
		return;
	}

	if (A[pos].size() == 0)
	{
		meet = false;
		return;
	}

	for (int i : A[pos])
	{
		DFS(i);
	}
}