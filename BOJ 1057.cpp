#include<stdio.h>
//백준 온라인 저지 1057번 토너먼트
int main(void)
{
	int n,k,e,count=0;
	scanf("%d %d %d",&n,&k,&e);
	
	if(k>n || e>n)
		count=-1;
	else{
		while(k!=e){
			k=(k+1)/2;
			e=(e+1)/2;
			count++;
		}
	}
	printf("%d",count);
}
