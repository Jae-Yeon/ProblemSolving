//백준 온라인 저지 1197번 최소 스패닝 트리
#include <stdio.h>
#include <algorithm>
using namespace std;

const int n_ = 1e5 + 1;

struct edg {
	int u, v, w;
	bool operator <(edg A)const { return w < A.w; }
};

int n, m, pnt[n_];
edg gph[n_];

int find(int u) {
	if (u == pnt[u]) return u;
	return pnt[u] = find(pnt[u]);
}

void merge(int u, int v) {
	u = find(u), v = find(v);
	if (u > v) swap(u, v);
	pnt[u] = v;
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &gph[i].u, &gph[i].v, &gph[i].w);
	}
	sort(gph, gph + m);
	long long ans = 0;
	for (int i = 1; i <= n; i++) pnt[i] = i;
	for (int i = 0; i < m; i++) {
		int u = find(gph[i].u), v = find(gph[i].v);
		if (pnt[u] != pnt[v]) merge(u, v), ans += gph[i].w;
	}

	printf("%lld", ans);

	return 0;
}
