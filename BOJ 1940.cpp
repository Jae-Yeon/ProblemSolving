#include<iostream>
#include<vector>
using namespace std;
int n, m, cnt;
int main() {
	cin >> n >> m;
	vector<int>vec(n);
	for (int i = 0; i < n; i++) cin >> vec[i];
	for(int i=0;i<n-1;i++)
		for (int j = i+1; j < n; j++) {
			if (vec[i] + vec[j] == m) cnt++;
		}
	cout << cnt;
}
