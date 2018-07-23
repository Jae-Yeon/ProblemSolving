#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int n;
priority_queue<int> pq;
int main() {
	cin >> n;
	while (n--) {
		int m;
		cin >> m;
		m = -m;
		if (m == 0) {
			if (pq.empty()) cout << "0\n";
			else {
				cout << -pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(m);
		}
	}
	return 0;
}
