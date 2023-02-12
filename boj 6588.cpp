#include<stdio.h>
int a[1000005] = { 1,1 }, n;
int main() {
	for (int i = 2; i < 1e6; i++) if (!a[i]) {
			for (int j = i * 2; j < 1e6; j += i)
				a[j] = 1;
		}
	while (1) {
		scanf("%d", &n);
		if (n == 0) return 0;
		bool res = false;
		for (int i = 1;; i++) if (!a[i] && !a[n - i]) {
			printf("%d = %d + %d\n", n, i, n - i);
			res = true;
			break;
		}
		if (!res) printf("Goldbach's conjecture is wrong.\n");
	}
}
