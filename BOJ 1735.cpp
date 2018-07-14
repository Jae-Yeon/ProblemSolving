//백준 온라인 저지 1735번 분수 합
#include<stdio.h>
int a, b, c, d;
int ans1, ans2;

int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }

int main() {
	scanf("%d %d\n", &b, &a);
	scanf("%d %d", &d, &c);
	ans1 = a*c;
	ans2 = a*d + b*c;

	printf("%d %d", ans2 / gcd(ans1, ans2), ans1 / gcd(ans1, ans2));
	return 0;
}
