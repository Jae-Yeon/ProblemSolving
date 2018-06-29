//백준 온라인 저지 1357번 뒤집힌 덧셈
#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string str1, str2, a, b;
int main() {
	cin >> str1 >> str2;
	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());
	int a = stol(str1);
	int b = stol(str2);
	int c = a + b;
	str1 = to_string(c);
	reverse(str1.begin(), str1.end());
	a = stol(str1);
	cout << a;
}
