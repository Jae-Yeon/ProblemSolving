//백준 온라인 저지 1260번 DFS와 BFS
#include<stdio.h>
#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int n, m, v, a[1005][1005], b[1005];
void dfs(int s) {
	b[s] = 1;
	printf("%d ", s);
	for (int i = 1; i <= n; i++) if (!b[i] && a[s][i]) dfs(i);
}
void bfs(int s) {
	queue<int> q;
	q.push(s);
	b[s] = 1;
	while (!q.empty()) {
		int t = q.front();
		q.pop();
		printf("%d ", t);
		for (int i = 1; i <= n; i++) if (!b[i] && a[t][i]) q.push(i), b[i] = 1;
	}
}
int main() {
	cin >> n >> m >> v;
	for (int i = 0, x, y; i < m; i++) {
		cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
	dfs(v);
	printf("\n");
	memset(b, 0, sizeof(b));
	bfs(v);
}
