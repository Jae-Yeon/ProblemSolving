//백준 온라인 저지 1149번 RGB거리
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[1005][5], n;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d %d", &a[i][1], &a[i][2], &a[i][3]);
		a[i][1] += min(a[i - 1][2], a[i - 1][3]);
		a[i][2] += min(a[i - 1][1], a[i - 1][3]);
		a[i][3] += min(a[i - 1][1], a[i - 1][2]);
	}
	printf("%d\n", min(a[n][1], min(a[n][2], a[n][3])));
}
