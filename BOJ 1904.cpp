//백준 온라인 저지 1904번 01
#include<stdio.h>
int n, a[1000005] = { 0,1,2 };
int main() {
	scanf("%d", &n);
	for (int i = 3; i <= n; i++) a[i] = (a[i - 1] + a[i - 2]) % 15746;
	printf("%d", a[n]);
}
