#include<stdio.h>
#include<algorithm>
using namespace std;
//백준 온라인 저지 1015번 
int a[1005];
int b[1005];
int n;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	sort(b, b + n);

	for(int i=0;i<n;i++)
		for (int j = 0; j < n; j++) {
			if (a[i] == b[j]) {
				printf("%d ", j);
				b[j] = -1;
				break;
			}
		}
}
