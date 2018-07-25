#include<stdio.h>
long long int a[1000005];
int n;
int main() {
	scanf("%d", &n);
	a[1] = 0;
	a[2] = 1;
	for (int i = 3; i <= n; i++)
		a[i] = (i - 1)*(a[i - 1] + a[i - 2]) % 1000000000;
	printf("%lld", a[n] % 1000000000);

	return 0;
}
