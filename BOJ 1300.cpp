//백준 온라인 저지 1300번 K번째 수
#include<iostream>
#include<algorithm>
using namespace std;
int n, k, res;
int main() {
	cin >> n >> k;
	int left = 0, right = k;
	while (left <= right) {
		int cnt = 0, mid = (left + right) / 2;
		for (int i = 1; i <= n; i++) cnt += min(mid / i, n);
		if (cnt < k) left = mid + 1;
		else right = mid - 1, res = mid;
	}
	cout << res;
}
