//백준 온라인 저지 1225번 이상한 곱셈
#include<stdio.h>
#include<string.h>
char a[10005];
char b[10005];
long long int sum;
int main() {
	scanf("%s %s", &a, &b);
	int len1 = strlen(a);
	int len2 = strlen(b);
	for (int i = 0; i < len1; i++)
		for (int j = 0; j < len2; j++)
			sum += (a[i]-48) * (b[j]-48);
	printf("%lld\n", sum);
}
