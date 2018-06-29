//백준 온라인 저지 1316번 그룹 단어 체커
#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int tc, ans = 0;
	string str;
	cin >> tc;
	while (tc--) {
		bool chk[26] = { 0 }, flg = 0;
		cin >> str;
		chk[str[0] - 'a'] = 1;
		for (int i = 1; i < str.size(); i++) {
			int now = str[i] - 'a', prv = str[i - 1] - 'a';
			if (chk[now] && now != prv) flg = 1;
			chk[now] = 1;
		}
		if (!flg) ans++;
	}

	cout << ans;

	return 0;
}
