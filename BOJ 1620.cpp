//백준 온라인 저지 1620번 나는야 포켓몬 마스터 
#include<iostream>
#include<string>
#include<map>
using namespace std;
string str;
int n, m;
map<string, int> a;
map<string, string>b;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> str;
		a[str] = i;
		b[to_string(i)] = str;
	}
	for (int i = 0; i < m; i++) {
		cin >> str;
		if (a[str] == 0) cout << b[str] << "\n";
		else cout << a[str] << "\n";
	}
}
