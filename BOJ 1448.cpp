//백준 온라인 저지 1448번 삼각형 만들기
#include<stdio.h>
#include<algorithm>
int n, a[1000005];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	std::sort(a, a + n);
	for (int i = n - 1; i >= 0; i--)
		if (a[i] < a[i - 1] + a[i - 2]) {
			printf("%d", a[i] + a[i - 1] + a[i - 2]);
			return 0;
		}
	printf("-1");
}
