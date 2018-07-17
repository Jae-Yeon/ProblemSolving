//백준 온라인 저지 1793번 타일링
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n;
string dp[255] = { "1","1" };
string f(string a, string b) {
	int sum = 0;
	string res;
	while (!a.empty() || !b.empty() || sum) {
		if (!a.empty()) sum += a.back() - '0', a.pop_back();
		if (!b.empty()) sum += b.back() - '0', b.pop_back();
		res.push_back((sum % 10) + '0');
		sum /= 10;
	}
	reverse(res.begin(), res.end());
	return res;
}
int main() {
	for (int i = 2; i <= 250; i++)
		dp[i] = f(f(dp[i - 2], dp[i - 2]), dp[i - 1]);
	while (cin >> n)
		cout << dp[n] << "\n";
}
