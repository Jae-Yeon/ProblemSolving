#include<stdio.h>
#include<algorithm>
#include<functional>
using namespace std;
//백준 온라인 저지 1026번 
int a[55], b[55], n, sum;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n; i++) scanf("%d", &b[i]);
	sort(a, a + n);
	sort(b, b + n, greater<int>());
	for (int i = 0; i < n; i++) sum += a[i] * b[i];
	printf("%d", sum);
}
