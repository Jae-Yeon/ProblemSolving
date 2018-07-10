//백준 온라인 저지 1547번 
#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int arr[]={0,1,0,0};
	int temp=0;

	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		temp=arr[a];
		arr[a]=arr[b];
		arr[b]=temp;
	}
	for(int i=1;i<4;i++){
		if(arr[i]==1)
			printf("%d",i);
	}
}
