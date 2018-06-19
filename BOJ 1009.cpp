#include<iostream>
#include<math.h>
using namespace std;
// 백준 온라인 저지 1009번 분산
int main() {
	int n, a, b;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		int tmp = a;
		for (int i = 0; i < b - 1; i++) a = tmp * a % 10;
		if (a == 0) cout << "10\n";
		else cout << a << "\n";
	}
}
