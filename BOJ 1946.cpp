#include<stdio.h>
int t, a[100005];
int main() {
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		for (int i = 0, x, y; i < n; i++) {
			scanf("%d %d", &x, &y);
			a[x] = y;
		}
		int cnt = 0, mn = 100005;
		for (int i = 1; i <= n; i++) {
			if (a[i] < mn) {
				cnt++;
				mn = a[i];
			}
		}
		printf("%d\n", cnt);
	}
}
