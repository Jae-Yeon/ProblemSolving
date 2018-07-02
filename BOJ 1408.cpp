//백준 온라인 저지 1408번 24
#include<stdio.h>
int ah, am, as, bh, bm, bs;
int main() {
	scanf("%d:%d:%d", &ah, &am, &as);
	scanf("%d:%d:%d", &bh, &bm, &bs);
	if (as > bs) bs += 60, bm -= 1;
	int s = bs - as;
	if (am > bm) bm += 60, bh -= 1;
	int m = bm - am;
	int h = bh - ah;
	if (h < 0) h += 24;
	if (h < 10) printf("0%d:", h);
	else printf("%d:", h);
	if (m < 10) printf("0%d:", m);
	else printf("%d:", m);
	if (s < 10)printf("0%d", s);
	else printf("%d", s);
}	
