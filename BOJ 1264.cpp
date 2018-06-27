//백준 온라인 저지 1264번 모음의 
#include<stdio.h>
#include<string.h>
char str[305], a[10] = { 'a','e','i','o','u','A','E','I','O','U' };
int main() {
	while (1) {
		int cnt = 0;
		gets(str);
		if (str[0] == '#') return 0;
		int len = strlen(str);
		for (int i = 0; i < len; i++)
			for (int j = 0; j < 10; j++)
				if (str[i] == a[j]) cnt++;
		printf("%d\n", cnt);
	}
}
