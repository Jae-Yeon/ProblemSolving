//백준 온라인 저지 1152
#include<stdio.h>
#include<string.h>

int coun = 1;
char a[1000005];
int len;

int main() {
	gets(a);
	len = strlen(a);
	for (int i = 0; i < len; i++) {
		if (a[i] == ' ') coun++;
	}
	if (a[0] == ' ') coun--;
	if (a[len - 1] == ' ')coun--;

	printf("%d\n",coun);

	return 0;
}
