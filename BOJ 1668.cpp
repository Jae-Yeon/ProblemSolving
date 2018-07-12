//백준 온라인 저지 1668번 트로피 진열
#include<stdio.h>
int a[55], n, l , r , tmp;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n; i++) 
		if (tmp < a[i]) l++, tmp = a[i];
		else continue;
	
	int tmp = 0;

	for (int i = n - 1; i >=0 ; i--) 
		if (tmp < a[i]) r++, tmp = a[i];
		else continue;

	printf("%d\n%d", l, r);
}	
