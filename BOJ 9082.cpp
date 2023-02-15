#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	int n;
	string str;
	string mine;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int res = 0;
		cin >> n;
		cin >> str;
		cin >> mine;
		for (int i = 0; i < n; i++)
		{
			if (i == 0)
			{
				if (str[0] != '0' && str[1] != '0')
				{
					str[0]--;
					str[1]--;
					res++;
				}
			}
			else if (i == n - 1)
			{
				if (str[n - 1] != '0' && str[n - 2] != '0')
				{
					str[n - 1]--;
					str[n - 2]--;
					res++;
				}
			}
			else
			{
				if (str[i - 1] != '0' && str[i] != '0' && str[i + 1] != '0')
				{
					str[i - 1]--;
					str[i]--;
					str[i + 1]--;
					res++;
				}
			}
		}
		cout << res << "\n";
	}
	return 0;
}
