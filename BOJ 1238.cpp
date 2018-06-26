//백준 온라인 저지 1238번 
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

const int MN = 1001;
const int INF = 987654321;

struct DATA
{
	int index, dist;
	DATA() {}
	DATA(int index, int dist) : index(index), dist(dist) {}
	bool operator <(DATA A)const
	{
		return A.dist > dist;
	}
};
vector<DATA> E1[MN];
vector<DATA> E2[MN];

int N, M, X;
int dist1[MN], dist2[MN];

void dijkstra(int s, int *dist, vector<DATA> *E)
{
	priority_queue<DATA> que;
	
	for (int i = 0; i < N; ++i) dist[i] = INF;
	dist[s] = 0;	
	for (int i = 0; i < N; ++i)	que.push(DATA(i, dist[i]));

	while (!que.empty())
	{
		DATA h = que.top();
		que.pop();

		if (h.dist != dist[h.index]) continue;

		for (DATA &e : E[h.index])
		{
			if (dist[e.index] > e.dist + h.dist)
			{
				dist[e.index] = e.dist + h.dist;
				que.push(DATA(e.index, dist[e.index]));
			}
		}
	}
}

int main()
{
	scanf("%d %d %d", &N, &M, &X); --X;
	for (int i = 0; i < M; ++i)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		--a, --b;
		E1[a].push_back(DATA(b, c));
		E2[b].push_back(DATA(a, c));
	}

	dijkstra(X, dist1, E1);
	dijkstra(X, dist2, E2);

	int ans = -1;
	for (int i = 0; i < N; ++i)
	{
		int sum = dist1[i] + dist2[i];
		ans = ans > sum ? ans : sum;
	}
	printf("%d", ans);

	return 0;
}
