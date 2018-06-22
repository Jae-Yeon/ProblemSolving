//백준 온라인 저지 1094번 막
#include<stdio.h>
int main(void)
{
	int s=64;
	int min=64;
	int n;
	int count=1;
	scanf("%d",&n);
	
	while(s!=n){
		min=min/2;
		count++;
		if(s-min>=n){
			s-=min;
			count--;
		}
	}
	printf("%d",count);
}
