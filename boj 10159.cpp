#include<stdio.h>
#define n_ 105
int n, m;
int go1[105][105];
int go2[105][105];
int res[105];
bool vst1[105];
bool vst2[105];

void dfs1(int v) 
{
	vst1[v] = 1;
	for (int i = 1; i <= n; i++) if (go1[v][i] && !vst1[i]) dfs1(i);
}

void dfs2(int v) 
{
	vst2[v] = 1;
	for (int i = 1; i <= n; i++) if (go2[v][i] && !vst2[i]) dfs2(i);
}

void reset() 
{
	for (int i = 1; i <= n; i++) vst1[i] = 0, vst2[i] = 0;
}

int main() 
{
	scanf("%d %d", &n, &m);
	for (int i = 0, x, y; i < m; i++) 
    {
		scanf("%d %d", &x, &y);
		go1[x][y] = 1;
		go2[y][x] = 1;
	}
	for (int i = 1; i <= n; i++) 
    {
		reset();
		dfs1(i);
		dfs2(i);
		int cnt = 0;
		for (int j = 1; j <= n; j++) 
			if (vst1[j] || vst2[j]) cnt++;
		res[i] = n - cnt;
	} 
	for (int i = 1; i <= n; i++) printf("%d\n", res[i]);
}
