#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	int ans = 0;
	string str;
	stack<char> stk;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(')
		{
			stk.push('(');
		}
		else
		{
			stk.pop();
			if (str[i-1] == '(')
			{
				ans += stk.size();
			}
			else
			{
				ans++;
			}
		}
	}
	cout << ans;
}
