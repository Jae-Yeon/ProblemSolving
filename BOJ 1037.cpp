#include<stdio.h>
//백준 온라인 저지 1037번 약수
int a[51];
int n, m;
int main() {
	scanf("%d", &n);
	int mx = 0, mn = 1000005;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] > mx) mx = a[i];
		if (a[i] < mn) mn = a[i];
	}
	
	printf("%d\n", mx*mn);

	return 0;
}
