//백준 온라인 저지 1915번 가장 큰 
#include<stdio.h>
#include<algorithm>
int a[1005][1005], n, m, g;
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%1d", &a[i][j]);
	for (int i = 1; i < n; i++) for (int j = 1; j < m; j++) if (a[i][j] != 0) a[i][j] += std::min(a[i - 1][j], std::min(a[i][j - 1], a[i - 1][j - 1]));
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) g = std::max(g, a[i][j]);
	printf("%d", g*g);
}
