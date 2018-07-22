//백준 온라인 저지 1919번 애너그램 만들기
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
string str1,str2;
int a[26],b[26],cnt;
int main(){
	cin >> str1 >>str2;
	for(int i=0;i<str1.size();i++) a[str1.at(i)-'a']++;
	for(int i=0;i<str2.size();i++) b[str2.at(i)-'a']++;
	
	for(int i=0;i<26;i++) {
		if(a[i]>0 && b[i]>0){
			if(a[i]>b[i]) {
			int x = a[i]-b[i];
			cnt+=x;
			}
			else if(a[i]<b[i]){
				int x = b[i]-a[i];
				cnt+=x;
			}
		}
		else cnt+=a[i],cnt+=b[i];		
	}
	printf("%d",cnt);
}
