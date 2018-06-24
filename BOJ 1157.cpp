//백준 온라인 저지 1157번 단어 
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

string str;
int a[26];
int max1 = 0, maxIndex = 0;
int main() {
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		char z = toupper(str.at(i));
		str.at(i) = z;
		a[str.at(i) - 65]++;
	}


	for (int i = 0; i < 26; i++) {
		if (max1 < a[i]) {
			max1 = a[i];
			maxIndex = i + 65;
		}
		else if (max1 == a[i]) maxIndex = -1;
	}
	if (maxIndex == -1) cout << "?" << "\n";
	else {
		printf("%c\n", maxIndex);
	}

}
