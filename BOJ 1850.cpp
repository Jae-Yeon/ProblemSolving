//백준 온라인 저지 1850번 
#include<stdio.h>
#include<string.h>
long long int a, b, c;
char s[5000005];
int main() {
	scanf("%lld %lld", &a, &b);
	while (b) {
		c = a % b;
		a = b;
		b = c;
	}
	memset(s, '1', a);
	printf("%s", s);
}
