//백준 온라인 저지 1297번 TV 크기
#include<stdio.h>
#include<math.h>
int l, a, b;
double c, t1, t2;
int main() {
	scanf("%d %d %d", &l, &a, &b);
	c = sqrt(a*a + b * b);
	t1 = a * l / c;
	t2 = b * l / c;
	printf("%d %d\n", (int)t1, (int)t2);
}
