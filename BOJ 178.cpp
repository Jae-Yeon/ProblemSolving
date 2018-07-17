//백준 온라인 저지 1789번 수들의 합
#include <stdio.h>
int main() {
	unsigned int num, i, count = 0;
	scanf("%u", &num);
	for (i = 1; i <= num; count++, i++)
		num -= i;
	printf("%u", count);
    return 0;
}
