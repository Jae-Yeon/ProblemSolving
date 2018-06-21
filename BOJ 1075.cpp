//백준 온라인 저지 1075번 나누기
#include<stdio.h>
int n, k;
int main() {
	scanf("%d %d", &n, &k);
	
	n /= 100;
	n *= 100;

	while (n % k != 0)
		n++;

	n %= 100;

	if (n < 10) {
		printf("0");
		printf("%d\n", n);
	}

	else printf("%d\n", n);

	return 0;
}
