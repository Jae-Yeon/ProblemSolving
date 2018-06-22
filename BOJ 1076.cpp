//백준 온라인 저지 1076번 저항
#include<stdio.h>
#include<string.h>
char a[10][9] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
char color[9];
long long int ans;
int main() {
	scanf("%s", &color);
	for (int i = 0; i < 10; i++)
		if (strcmp(a[i], color) == 0)
			ans += i * 10;
	scanf("%s", &color);
	for (int i = 0; i < 10; i++)
		if (strcmp(a[i], color) == 0)
			ans += i;
	scanf("%s", &color);
	for (int i = 0; i < 10; i++)
		if (strcmp(a[i], color) == 0) {
			for (int j = 0; j < i; j++)
				ans *= 10;
		}
	printf("%lld", ans);
}
