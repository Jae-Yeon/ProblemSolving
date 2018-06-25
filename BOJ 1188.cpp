//백준 온라인 저지 1188번 음식 평론가
#include <stdio.h>
int n, m, res, pos;

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i < m; i++) {
		pos += n;
		if (pos%m) res++;
	}
	printf("%d\n", res);
	return 0;
}
