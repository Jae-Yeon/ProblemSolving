//백준 온라인 저지 가장 
#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;

int a[26], mx;
string str;

int main() {
	while (cin >> str) {
		for (int i = 0; i < str.length(); i++)
		{
			a[str[i] - 'a']++;
		}
		str = "";
	}

	for (int i = 0; i < 26; i++){
		if (mx < a[i])mx = a[i];
	}
	for (int i = 0; i < 26; i++) {
		if (a[i] == mx)cout << (char)('a' + i);
	}
}
