//백준 온라인 저지 1085번 직사각형에서 탈출
#include <stdio.h>
int main() {
	int x, y, w, h, xbig, ybig;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	xbig = x <= w - x ? x : w - x;
	ybig = y <= h - y ? y : h - y;
	printf("%d", xbig <= ybig ? xbig : ybig);
	return 0;
}
