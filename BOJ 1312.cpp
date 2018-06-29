//백준 온라인 저지 1312번 소수
#include<iostream>
using namespace std;
int a, b, n;
int main() {
	cin >> a >> b >> n;
	a %= b;
	for (int i = 0; i < n - 1; i++) {
		a *= 10;
		a %= b;
	}
	a *= 10;
	cout << a / b;
}
