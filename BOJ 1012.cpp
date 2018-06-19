#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
//백준 온라인 저지 1012번 유기농 배추
queue<int>q;
int t, n, m, k;
int field[50][50], worm[50][50];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

void bfs() {
	int w = 0;

	for (int i = 0; i < n*m; i++) {
		if (field[i / m][i%m] == 1 && worm[i / m][i%m] == 0)
			q.push(i);

		while (!q.empty()) {
			int x = q.front() % m, y = q.front() / m;
			q.pop();

			if (worm[y][x] == 0)worm[y][x] = ++w;

			for (int i = 0; i < 4; i++) {
				int bx = x + dx[i], by = y + dy[i];
				if (bx >= 0 && bx < m&&by >= 0 && by < n) {
					if ((worm[by][bx] == 0) && field[by][bx] == 1) {
						worm[by][bx] = worm[y][x];
						q.push(by*m + bx);
					}
				}
			}
		}
	}
	printf("%d\n", w);
}

int main() {
	int x, y;
	scanf("%d", &t);

	while (t--) {
		scanf("%d %d %d", &m, &n, &k);
		for (int i = 0; i < k; i++) {
			scanf("%d %d", &x, &y);
			field[y][x] = 1;
		}
		bfs();
		memset(field, 0, sizeof(field));
		memset(worm, 0, sizeof(worm));
	}
}
