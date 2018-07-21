//백준 온라인 저지 1874번 스택수열
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

stack<int> stk;
vector<char> vec;
int n, a[100005], m = 0;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 1; i <= n; i++) {
		stk.push(i);
		vec.push_back('+');
		while (!stk.empty() && stk.top() == a[m]) {
			m++;
			stk.pop();
			vec.push_back('-');
		}
	}
	if (!stk.empty()) cout << "NO";
	else {
		for (int i = 0; i < vec.size(); i++)
			cout << vec.at(i) << "\n";
	}
}
