//백준 온라인 저지 1790번 수 이어 쓰기 2
#include<stdio.h>
int main()
{
	int a, b, sum = 10, num = 1;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++) {
		if (i / sum >= 1) {
			num++; sum *= 10;
		}
		if (b - num <= 0) {
			int temp;
			sum /= 10;
			while (b--) {
				temp = i / sum;
				i %= sum;
				sum /= 10;
			}
			printf("%d", temp);
			return 0;
		}
		else b -= num;
	}
	printf("-1");
	return 0;
}
