//백준 온라인 저지 1773번 폭죽쇼
#include<stdio.h>
int n, c, cnt;
int stu[101];
int a[2000005];
int main() {
	scanf("%d %d", &n, &c);
	
	for (int i = 0; i < n; i++)
		scanf("%d", &stu[i]);

	for (int i = 1; i <= c; i++) {
		for (int j = 0; j < n; j++) {
			if (i%stu[j] == 0) a[i] = 1;
		}
	}
	for (int i = 0; i <= c; i++) 
		if (a[i] == 1) cnt++;

	printf("%d\n", cnt);
	return 0;
}
