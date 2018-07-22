//백준 온라인 저지 1916
#include<stdio.h>
#include<queue>
#include<vector>
using namespace std;
const int n_ = 1e3 + 1;
struct edg {
	int idx, dst;
	edg() {}
	edg(int idx, int dst) : idx(idx), dst(dst) {}
	bool operator < (edg A) const { return dst > A.dst; }
};

int n, m, s, e, dst[n_];
vector<edg> gph[n_];

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0, a, b, c; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		gph[a].push_back(edg(b, c));
	}
	scanf("%d %d", &s, &e);

	priority_queue<edg> pq;

	for (int i = 0; i <= n; i++) dst[i] = 1e9;
	dst[s] = 0;
	pq.push(edg(s, dst[s]));

	while (!pq.empty()) {
		edg now = pq.top();
		pq.pop();
		if (dst[now.idx] != now.dst) continue;
		if (now.idx == e) break;
		for (edg nxt : gph[now.idx]) {
			if (dst[nxt.idx] > dst[now.idx] + nxt.dst) {
				dst[nxt.idx] = dst[now.idx] + nxt.dst;
				pq.push(edg(nxt.idx, dst[nxt.idx]));
			}
		}
	}
	printf("%d",dst[e]);
}
