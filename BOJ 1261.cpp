//백준 온라인 저지 1261번 알고스팟
#include<stdio.h>
#include<queue>
#include<vector>
using namespace std;
const int n_ = 100 + 5;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

struct edg {
	int x, y, w;
	edg(int x, int y, int w) : x(x), y(y), w(w) {}
	bool operator <(edg A) const { return w > A.w; }
};

int main() {
	int n, m, chk[n_][n_] = { 0, };
	char a[n_][n_];
	priority_queue<edg> pq;

	scanf("%d %d\n", &m, &n);
	for (int i = 0; i < n; i++) scanf("%s", a[i]);

	pq.push(edg(0, 0, 0));
	while (!pq.empty()) {
		edg top = pq.top();
		pq.pop();
		if (top.x == n - 1 && top.y == m - 1) {
			printf("%d\n", top.w);
			break;
		}
		chk[top.x][top.y] = 1;
		for (int i = 0; i < 4; i++) {
			int nx = top.x + dx[i];
			int ny = top.y + dy[i];
			int nw = top.w + (a[nx][ny] == '1' ? 1 : 0);
			if (nx < 0 || nx >= n || ny < 0 || ny >= m || chk[nx][ny])  continue;
			pq.push(edg(nx, ny, nw));
		}
	}
	return 0;
}
