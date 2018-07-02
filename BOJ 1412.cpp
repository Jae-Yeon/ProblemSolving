//백준 온라인 저지 1412번 일방통행
#include<stdio.h>

int n, vst[105], flag;
char gph[105][105];

void dfs(int u) {
	if (vst[u]) flag = 1;
	if (flag) return;
	vst[u] = 1;
	for(int i=0;i<n;i++) if (gph[u][i] == 'Y' && gph[i][u] == 'N')
		gph[u][i] = 'N', dfs(i);
	vst[u] = 0;
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%s", gph + i);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (gph[i][j] == 'Y' && gph[j][i] == 'N') dfs(i), gph[i][j] = 'N';
			if (flag) {
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}
