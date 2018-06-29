//백준 온라인 저지 1356번 유진수
#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
string str;
bool res = false;
int main() {
	cin >> str;
	if (str == "1") {
		printf("NO");
		return 0;
	}

	for (int i = 0; i < str.size(); i++) {
		string a, b;
		for (int j = 0; j < i; j++) a.push_back(str.at(j));
		for (int j = i; j < str.size(); j++) b.push_back(str.at(j));
		int x = 1, y = 1;
		for (int j = 0; j < a.size(); j++) x *= a.at(j) - '0';
		for (int j = 0; j < b.size(); j++) y *= b.at(j) - '0';
		if (x == y) res = true;
	}
	if (res) printf("YES");
	else printf("NO");
}
