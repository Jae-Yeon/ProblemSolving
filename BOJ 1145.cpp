//백준 온라인 저지 1145번 적어도 
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[5];
int  cnt;
int main() {
	for (int i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	int i = 1;

	while (1) {
		cnt = 0;
		for (int j = 0; j < 5; j++) {
			if (i % a[j] == 0) cnt++;
		}
		if (cnt >= 3) break;
		i++;
	}
	printf("%d\n", i);
}
