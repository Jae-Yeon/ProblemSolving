#include<stdio.h>

int main(void){
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char day[7][4]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
		int count = 0;
		int x,y;
		scanf("%d %d",&x,&y);

		for(int i=0;i<x;i++)
		{
			if((i+1)==x)
				count +=y;
			else 
				count +=month[i];
		}

		printf("%s",day[count % 7]);
}
