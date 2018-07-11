//백준 온라인 저지 1629번 
#include<iostream>
using namespace std;
long long a, b, c, tmp = 1;
int main() {
	cin >> a >> b >> c;
	while (b > 0) {
		if (b % 2 == 1) {
			tmp *= a;
			tmp %= c;
		}
		a *= (a%c);
		a %= c;
		b /= 2;
	}
	cout << tmp % c;
}
