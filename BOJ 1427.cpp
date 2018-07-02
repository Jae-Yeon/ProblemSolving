//백준 온라인 저지 1427번 소트인사이드
#include<stdio.h>
#include<string.h>

int main(void){
	char s[11]=" ";
	int len,temp;
	gets(s);

	len = strlen(s);

	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(s[i]<s[j]){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	puts(s);
}
