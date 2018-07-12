//백준 온라인 저지 1697번 숨바꼭질
#include<cstdio>
#include<queue>
using namespace std;

int n, k, visited[100001] = { 0, };
queue<int> q;

int bfs() {
	q.push(n);
	visited[n] = 1;
	while (!q.empty()) {
		int p = q.front();
		q.pop();
		if (p == k) return visited[p] - 1;

		if (p - 1 >= 0 && visited[p - 1] == 0) {
			visited[p - 1] = visited[p] + 1;
			q.push(p - 1);
		}
		if (p + 1 <= 100000 && visited[p + 1] == 0) {
			visited[p + 1] = visited[p] + 1;
			q.push(p + 1);
		}
		if (2 * p <= 100000 && visited[2 * p] == 0) {
			visited[2 * p] = visited[p] + 1;
			q.push(2 * p);
		}
	}
}
int main() {
	scanf("%d %d", &n, &k);
	printf("%d", bfs());
}
