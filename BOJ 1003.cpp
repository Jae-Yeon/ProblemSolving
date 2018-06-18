#include<stdio.h>
//BOJ 1003번 피보나치 함수
int a[41] = { 1,0 }, b[41] = { 0,1 };
int t, n;
int main() {
	scanf("%d", &t);
	for (int i = 2; i <= 40; i++) {
		a[i] = a[i - 1] + a[i - 2];
		b[i] = b[i - 1] + b[i - 2];
	}
	while (t--) {
		scanf("%d", &n);
		printf("%d %d\n", a[n], b[n]);
	}
}
