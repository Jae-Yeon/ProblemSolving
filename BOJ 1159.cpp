//백준 온라인 저지 1159번 
#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;
int n, cnt;
string str;
map<char, int>m;
int main() {
	cin >> n;
	while (n--) {
		cin >> str;
		m[str[0]]++;
	}
	for (auto it : m) {
		if (it.second >= 5) {
			cnt++;
			cout << it.first;
		}
	}
	if (cnt == 0) cout << "PREDAJA";
}
