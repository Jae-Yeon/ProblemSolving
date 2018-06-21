#include<stdio.h>
//백준 온라인 저지 1065번 한수
int main(void){
	int n;
	scanf("%d",&n);
	int count=0;
	if(n<100)
		count = n;
	
	else{
		count+=99;
		int o,t,h;
		for(int i=100;i<=n;i++){
			if(i==1000) break;

			h=i/100;
			t=(i/10)%10;
			o=i%10;
			
			int a,b;
			a=h-t; b=t-o;
			if(a==b)
				count++;

		}
	}
	printf("%d",count);

}
