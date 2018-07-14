//백준 온라인 저지 1718번 암호
#include<iostream>
#include<string>
using namespace std;
string str1, str2;
int main() {
	getline(cin, str1);
	getline(cin, str2);
	
	for (int i = 0; i < str1.size(); i++) {
		int tmp = i % str2.size();
		int p = str1[i] - str2[tmp] - 1;

		if (str1[i] != ' ') {
			if (p < 0)
				printf("%c", p + 'a' + 26);
			else
				printf("%c", p + 'a');
		}
		else printf(" ");
	}
}
