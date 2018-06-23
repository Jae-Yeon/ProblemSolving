//백준 온라인 저지 1120번 
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
string a, b;
int mn = 987654321;
int main() {
	cin >> a >> b;
	int len = b.size() - a.size();
	for (int i = 0; i <= len; i++) {
		int tmp = 0;
		for (int j = 0; j < a.size(); j++)
			if (a[j] != b[i + j]) tmp++;
		if (mn > tmp) mn = tmp;
	}
	printf("%d", mn);
}
