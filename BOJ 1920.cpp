//백준 온라인 저지 1920
#include<stdio.h>
#include<algorithm>
using namespace std;
int n, m;
int card[100005], sch[100005];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &card[i]);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) scanf("%d", &sch[i]);
	sort(card, card + n);

	for (int i = 0; i < m; i++) {
		int schNum = sch[i];
		int left = 0, right = n - 1, mid;
		bool res = false;
		while (left <= right) {
			mid = (right + left) / 2;
			if (card[mid] > schNum) right = mid - 1;
			else if (card[mid] < schNum) left = mid + 1;
			else {
				res = true;
				break;
			}
		}
		if (res) printf("1\n");
		else printf("0\n");
	}
}
