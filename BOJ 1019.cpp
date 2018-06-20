#include<cstdio>
typedef long long ll;
//백준 온라인 저지 1019번 책 페이지
ll x, y, r[10], m;
int main() {
	scanf("%lld", &x);
	for (m = 1; x; m *= 10) {
		int t = x % 10;
		x /= 10;
		for (int j = 0; j < t; j++) r[j] += (x + 1)*m;
		r[t] += x*m + y + 1;
		for (int j = t + 1; j < 10; j++) r[j] += x*m;
		y += t*m;
	}
	r[0] -= (m - 1) / 9;
	for (int i = 0; i < 10; i++) printf("%lld ", r[i]);
	return 0;
}
