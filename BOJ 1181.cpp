//백준 온라인 저지 1181번 단어 정렬
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n;
string str[20005];

bool compare(const string &i, const string &j) {
	if (i.length() == j.length()) {
		return i < j;
	}
	return i.length() < j.length();
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> str[i];

	sort(str, str + n, compare);

	for (int i = 0; i < n; i++) {
		if (i != 0 && (str[i] == str[i - 1]))
			continue;
		else
			cout << str[i] << '\n';
	}

	return 0;
}
