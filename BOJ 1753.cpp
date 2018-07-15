//백준 온라인 저지 1753번 최단경로
#include<stdio.h>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

const int INF = 987654321;
const int n_ = 20000 + 1;

struct edg {
	int idx, dst;
	edg() {}
	edg(int idx,int dst) : idx(idx),dst(dst){}
	bool operator < (edg A) const { return dst > A.dst; }
};

int v, e, s, dst[n_];
vector<edg> gph[n_];

void dijkstra() {
	for (int i = 0; i < v; i++) dst[i] = INF;
	dst[s] = 0;

	priority_queue<edg> pq;
	for (int i = 0; i < v; i++) pq.push(edg(i, dst[i]));

	while (!pq.empty()) {
		edg now = pq.top();
		pq.pop();

		if (now.dst != dst[now.idx]) continue;

		for (edg next : gph[now.idx]) {
			if (dst[next.idx] > now.dst + next.dst) {
				dst[next.idx] = now.dst + next.dst;
				pq.push(edg(next.idx, dst[next.idx]));
			}
		}
	}
}

int main() {
	scanf("%d %d", &v, &e);
	scanf("%d", &s);
	s--;

	for (int i = 0, u, v, w; i < e; i++) {
		scanf("%d %d %d", &u, &v, &w);
		u--, v--;
		gph[u].push_back(edg(v, w));
	}

	dijkstra();

	for (int i = 0; i < v; i++) {
		dst[i] != INF ? printf("%d", dst[i]) : printf("INF");
		printf("\n");
	}

	return 0;
}
