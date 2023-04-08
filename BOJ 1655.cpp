//백준 온라인 저지 1655번 가운데를 말해요 
#include<iostream>
#include<queue>
using namespace std;

int n;
// 우선순위 큐 사용
priority_queue<int> mxHeap,mnHeap;

int main(){
	ios_base::sync_with_stdio(false),cin.tie(NULL);
	cin >> n;
	
	for(int i=0;i<n;i++){
		int u; cin >> u;
		if(mxHeap.size() == mnHeap.size()) mxHeap.push(u);
		else mnHeap.push(-u);
		
		if(!mxHeap.empty() && !mnHeap.empty() && mxHeap.top() > -mnHeap.top()){
			int x = mxHeap.top() , y = -mnHeap.top();
			mxHeap.pop() , mnHeap.pop();
			mxHeap.push(y) , mnHeap.push(-x);
		}
		cout << mxHeap.top() << "\n";
	}
}
