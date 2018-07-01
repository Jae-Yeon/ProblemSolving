//백준 온라인 저지 1373번 2진수 8
#include<stdio.h>
#include<string.h>
char a[1000002] = { '0','0' };
int main() {
	scanf("%s", a + 2);
	int len = strlen(a);
	for (int i = len % 3; i < len; i += 3) {
		printf("%d", (a[i] - '0') * 4 + (a[i + 1] - '0') * 2 + (a[i + 2] - '0'));
	}
}
