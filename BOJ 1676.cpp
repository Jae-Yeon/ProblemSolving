//백준 온라인 저지 1676번 팩토리얼 0의 
#include<stdio.h>
int cnt, n;
int main() {
	scanf("%d", &n);
	cnt += n / 5; 
	cnt += n / 25;
	cnt += n / 125;
	printf("%d", cnt);
}
