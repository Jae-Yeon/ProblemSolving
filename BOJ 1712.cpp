//백준 온라인 저지 1712번 손익 분기점
#include<stdio.h>
int a, b, c;
int main() {
	scanf("%d %d %d", &a, &b, &c);
	if (c - b <= 0) { printf("-1"); return 0; }
	printf("%d", a / (c - b) + 1);
}
