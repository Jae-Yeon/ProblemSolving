#include<stdio.h>
//BOJ 1004번 어린 왕자
int t;
int main() {
	scanf("%d", &t);
	while (t--) {
		int x1, y1, x2, y2, n, cnt = 0;
		scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &n);
		for (int i = 0, cx, cy, r, d; i < n; i++) {
			scanf("%d %d %d", &cx, &cy, &r);
			d = (cx - x1) * (cx - x1) + (cy - y1)*(cy - y1);
			bool in1 = d > r * r ? false : true;
			d = (cx - x2) * (cx - x2) + (cy - y2)*(cy - y2);
			bool in2 = d > r * r ? false : true;
			if (in1 != in2) cnt++;
		}
		printf("%d\n", cnt);
	}
}
