//백준 온라인 저지 1613번 역사
#include<stdio.h>
int n, k, s;
bool a[405][405];

int main() {
	scanf("%d %d", &n, &k);
	for (int i = 0; i < k; i++) {
		int q, w;
		scanf("%d %d", &q, &w);
		a[q][w] = true;
	}
	for (int x = 1; x <= n; x++) {
		for (int i = 1; i <= n; i++) 
			for (int j = 1; j <= n; j++) {
				a[i][j] = a[i][j] || (a[i][x] && a[x][j]);
			}
	}

	scanf("%d", &s);
	for (int i = 0; i < s; i++) {
		int q, w;
		scanf("%d %d", &q, &w);
		if (!a[q][w] && !a[w][q]) printf("0\n");
		else if (a[q][w]) printf("-1\n");
		else if (!a[q][w] && a[w][q] == 1) printf("1\n");
	}

	return 0;
}
