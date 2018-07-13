//백준 온라인 저지 1699번 제곱수의 합
#include<iostream>
#include<algorithm>
using namespace std;
int n, dp[100005];
int main() {
	cin >> n;
	for (int i = 0; i <= n; i++) dp[i] = i;
	for (int i = 2; i <= n; i++)
		for (int j = 2; j*j <= i; j++)
			dp[i] = min(dp[i], dp[i - j * j] + 1);
	cout << dp[n];
}
