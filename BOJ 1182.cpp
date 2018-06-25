//백준 온라인 저지 1182번 부분집합의 합
#include<stdio.h>
int n, s, sum, ans, a[22];
int main() {
	scanf("%d %d", &n,&s);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 1; i < (1 << n); i++) {
		sum = 0;
		for (int j = 0; j < n; j++) if (i&(1 << j)) sum += a[j];
		ans += (s == sum);
	}
	printf("%d", ans);

	return 0;
}
