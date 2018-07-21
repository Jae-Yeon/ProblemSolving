//백준 온라인 저지 1913번 달팽이
#include<stdio.h>
int i, j, k, n, m, x, y, X, Y, v = 1, s[1000][1000];
int main(){
	scanf("%d %d", &n, &m);
	x = y = X = Y = n / 2 + 1;
	s[x][y] = 1;
	for (k = 0, j = 2; k<n / 2; k++, j += 2){
		x--;
		for (i = 0; i<j; i++) { if (++v == m) X = x, Y = y; s[x][y++] = v; } y--;
		for (i = 0; i<j; i++) { s[++x][y] = ++v; if (v == m) X = x, Y = y; }
		for (i = 0; i<j; i++) { s[x][--y] = ++v; if (v == m) X = x, Y = y; }
		for (i = 0; i<j; i++) { s[--x][y] = ++v; if (v == m) X = x, Y = y; }
	}
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++)
			printf("%d ", s[i][j]);
      printf("\n");
	}
	printf("%d %d", X, Y);
}
