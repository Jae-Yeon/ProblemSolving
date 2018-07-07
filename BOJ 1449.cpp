//백준 온라인 저지 1449번 수리공 항승
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[1005];
int n,l;
int main() {
	scanf("%d %d", &n, &l);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	sort(a, a + n);
	
	int tmp = a[0], cnt = 1;
	for (int i = 0; i < n; i++)
		if (tmp + l - 1 < a[i]) tmp = a[i], cnt++;

	printf("%d\n", cnt);

	return 0;
}
