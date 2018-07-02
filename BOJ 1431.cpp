//백준 온라인 저지 1431번 시리얼 번호
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() != b.length()) return a.length() < b.length();
	int cntA = 0, cntB = 0;
	for (int i = 0; i < a.length(); i++) {
		if (isdigit(a.at(i))) cntA += a.at(i) - '0';
		if (isdigit(b.at(i))) cntB += b.at(i) - '0';
	}
	if (cntA != cntB) return cntA < cntB;
	return a < b;
}

int main() {
	int n;
	string str[1005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> str[i];
	sort(str, str + n, compare);
	for (int i = 0; i < n; i++)cout << str[i] << endl;
}
