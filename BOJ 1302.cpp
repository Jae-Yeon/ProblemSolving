//백준 온라인 저지 1302번 베스트 셀러
#include<iostream>
#include<map>
#include<string>
using namespace std;
int n, mx;
string str;
map<string, int>mp;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		mp[str]++;
	}

	for (auto it = mp.begin(); it != mp.end(); it++)
		if (it->second > mx) mx = it->second;

	for (auto it = mp.begin(); it != mp.end(); it++)
		if (it->second == mx) {
			cout << it->first << "\n";
			return 0;
		}
	return 0;
}
