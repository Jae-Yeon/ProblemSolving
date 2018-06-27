//백준 온라인 저지 1292번 쉽게 푸는 문제
#include<stdio.h>
int a[1000005];
int cnt;
int n, m;
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= i; j++) {
			a[cnt] = i;
			cnt++;
		}
	}
	int sum = 0;
	for (int i = n - 1; i <= m - 1; i++)
		sum += a[i];

	printf("%d\n", sum);
	return 0;
}
