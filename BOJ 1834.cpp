//백준 온라인 저지 1834번 나머지와 몫이 같은 
#include<stdio.h>
long long int n, sum;
int main() {
	scanf("%lld", &n);
	for (int i = 1; i < n; i++)
		sum += n * i + i;
	printf("%lld", sum);
}
