//백준 온라인 저지 1463번 1로 만들기
#include <stdio.h>
#include <algorithm>
using namespace std;
const int MAX = 1000001;

int dp[MAX];

int f(int n) {
	if (n == 1) return 0; // base case
	if (dp[n] != -1) return dp[n];
	int result = f(n - 1) + 1;
	if (n % 3 == 0) result = min(result, f(n / 3) + 1);
	if (n % 2 == 0) result = min(result, f(n / 2) + 1);
	dp[n] = result;
	return result;
}

int main() {
	int N;
	scanf("%d", &N);
	fill(dp, dp + MAX, -1);
	printf("%d\n", f(N));
  
  return 0;
}
