#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
//백준 온라인 저지 11297번 최대 힙
int n;
priority_queue<int> pq;
int main() {
	cin >> n;
	while (n--) {
		int m;
		cin >> m;
		if (m == 0) {
			if (pq.empty()) cout << "0\n";
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(m);
		}
	}
	return 0;
}
