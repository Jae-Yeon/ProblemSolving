//백준 온라인 저지 1740번 거듭제곱
#include<iostream>
#include<queue>
using namespace std;
queue<int>q;
long long n, ans, add=1;
int main() {
	cin >> n;
	while (n) q.push(n % 2), n /= 2;
	while (!q.empty()) {
		ans += q.front()*add;
		add *= 3;
		q.pop();
	}
	cout << ans;
}
