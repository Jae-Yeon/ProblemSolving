//백준 온라인 저지 1912
#include<stdio.h>
int n, ar[100005],an[100005] , max;

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &ar[i]);
	
	for (int i = 1; i <= n; i++) {
		if (an[i - 1] + ar[i] > ar[i])
			an[i] = an[i - 1] + ar[i];
		else
			an[i] = ar[i];
	}
	max = an[1];

	for (int i = 2; i <= n; i++) {
		if (an[i] > max)
			max = an[i];
	}
	printf("%d", max);

	return 0;
}
