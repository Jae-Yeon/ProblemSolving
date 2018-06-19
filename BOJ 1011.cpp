#include<iostream>
using namespace std;
//백준 온라인 저지 1011번 Fly me to the Alpha Centauri
int t;
int main() {
	cin >> t;
	while (t--) {
		int x, y, ans = 1;
		cin >> x >> y;
		unsigned int gap = y - x, pos = 1;
		for (int i = 2; pos < gap; i++) {
			pos += i / 2;
			ans++;
		}
		if (pos > gap) ans--;
		printf("%d\n", ans);
	}
}
