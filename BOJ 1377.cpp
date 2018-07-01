//백준 온라인 저지 1377번 버블소트
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, mx;
int main() {
	cin >> n;
	vector<pair<int, int>>vec(n);
	for (int i = 0; i < n; i++) vec[i].second = i, cin >> vec[i].first;
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n; i++) if (mx < vec[i].second - i) mx = vec[i].second - i;
	cout << mx + 1;
}
