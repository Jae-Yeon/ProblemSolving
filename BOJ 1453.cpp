//백준 온라인 저지 1453번 피시방 
#include<stdio.h>
int a[105];
int n, cnt;

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int m;
		scanf("%d", &m);
		if (a[m] == 1) cnt++;
		else a[m] = 1;
	}
	printf("%d\n", cnt);

	return 0;
}
