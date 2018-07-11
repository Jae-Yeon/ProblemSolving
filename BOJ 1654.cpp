//백준 온라인 저지 1654번 
#include<iostream>
#include<algorithm>
using namespace std;
long long n, k, a[10005], mx, ans, l = 1, r, mid, cnt;
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i], mx = max(mx, a[i]);
	l = 1, r = mx;
	while (l <= r) {
		mid = (l + r) / 2, cnt = 0;
		for (int i = 0; i < n; i++) cnt += a[i] / mid;
		if (cnt >= k) ans = mid, l = mid + 1;
		else r = mid - 1;
	}
	cout << ans;
}
