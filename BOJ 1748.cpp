//백준 온라인 저지 1748번 수 이어쓰기 1
#include<stdio.h>
int n, r;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i *= 10) {
		r += n - i + 1;
	}
	printf("%d", r);
	
	return 0;
}
