//백준 온라인 저지 1766번 문제집
#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
#define MAX_N 32000

int n,m,pro[MAX_N+1];
vector<vector<int> >vec;

int main(){
	scanf("%d %d",&n,&m);
	vec.resize(n+1);
	for(int i=0,a,b;i<m;i++){
		scanf("%d%d",&a,&b);
		vec[a].push_back(b);
		pro[b]++;
	}
	
	priority_queue<int> pq;
	
	for(int i=1;i<=n;i++)
		if(!pro[i])pq.push(-i);
	
	while(pq.size()){
		int start = -pq.top();
		pq.pop();
		printf("%d ",start);
		for(auto go : vec[start]){
			pro[go]--;
			if(!pro[go]) pq.push(-go);
		}
	}
	
	return 0;
}
