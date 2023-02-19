#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
	int n = 0, m = 0;
	int a[100005];
	stack<int> stk;
	vector<char> vec;

	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 1; i <= n; i++)
	{
		stk.push(i);
		vec.push_back('+');
		while (!stk.empty() && stk.top() == a[m])
		{
			m++;
			stk.pop();
			vec.push_back('-');
		}
	}
	if (!stk.empty()) cout << "NO";
	else
	{
		for (int i = 0; i < vec.size(); i++)
			cout << vec.at(i) << "\n";
	}	
}
