//백준 온라인 저지 1717번 집합의 표현
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[1000005], n, m;

int find(int u) {
	if (u == a[u]) return u;
	return a[u] = find(a[u]);
}

void merge(int u, int v) {
	u = find(u);
	v = find(v);
	if (u > v) swap(u, v);
	a[u] = v;
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i <= n; i++) a[i] = i;
	for (int i = 0, a, b, c; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0) merge(b, c);
		else {
			b = find(b), c = find(c);
			if (b == c) printf("YES\n");
			else printf("NO\n");
		}
	}
}
