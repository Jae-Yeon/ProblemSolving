//백준 온라인 저지 1701번 Cubeditor
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int ans, cnt;
char str[5005];
vector<string>vec;
int main() {
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) vec.push_back(str + i);
	sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size() - 1; i++) {
		while (vec[i][cnt] == vec[i + 1][cnt]) ++cnt;
		ans = max(ans, cnt);
		cnt = 0;
	}
	cout << ans;
}
