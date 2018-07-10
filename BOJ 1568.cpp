//백준 온라인 저지 1568번 
#include<stdio.h>
int n;
int main() {
	scanf("%d", &n);
	int i = 1;
	int j = 0;
	while (n != 0) {
		n -= i;
		i++;
		j++;
		if (n!=0 && i > n) 
			i = 1;
	}
	printf("%d\n",j);
	return 0;
}
