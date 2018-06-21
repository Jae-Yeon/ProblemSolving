#include<iostream>
#include<algorithm>
using namespace std;
//백준 온라인 저지 1049번 기타줄
int n, m, o = 1005, t = 1005, x, y;
int main() {
	cin >> n >> m;
	while (m--) {
		cin >> x >> y;
		o = min(o, x);
		t = min(t, y);
	}
	o = min(o, t * 6);
	cout << n / 6 * o + min(o, (n % 6)*t);
}
