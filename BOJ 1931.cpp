#include<iostream>
#include<algorithm>
using namespace std;
pair<int, int> p[100005];
int n, cnt, tmp;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> p[i].second >> p[i].first;
	sort(p, p + n);
	for (int i = 0; i < n; i++) {
		if (tmp <= p[i].second) {
			tmp = p[i].first;
			cnt++;
		}
	}
	cout << cnt;
}
