//백준 온라인 저지 1806번 부분합
#include<stdio.h>
int n, s, a[100005], r = 1e9;
int main() {
	scanf("%d%d", &n, &s);
	for (int i = 1, j = 0; i <= n; i++) {
		scanf("%d", a + i);
		a[i] += a[i - 1];
		for (; a[i] - a[j] >= s; j++) if (r > i - j) r = i - j;
	}
	printf("%d", a[n] > s ? r : 0);
}
