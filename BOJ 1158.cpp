//백준 온라인 저지 1158번 조세퍼스 문제
#include<iostream>
#include<vector>
using namespace std;
int n, m, divi;
vector<int> vec;

int main() {
	
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) 
		vec.push_back(i+1);
	
	cout << "<";
	while (vec.empty() == 0) {
		divi = (divi + m - 1) % vec.size();
		if(vec.size()>1) cout << vec[divi] << ", ";
		else cout << vec[divi] << ">";
		vec.erase(vec.begin() + divi);
	}
	return 0;
}
