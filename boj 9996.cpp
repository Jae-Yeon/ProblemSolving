#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string str;
	cin >> n;
	cin >> str;
	int star = str.find('*');
	for (int i = 0; i < n; i++)
	{
		string gogo;
		bool res = true;
		cin >> gogo;

		int gogoSize = gogo.size();
		int strSize = str.size();

		if (strSize - 1 > gogoSize)
		{
			cout << "NE" << "\n";
			continue;
		}
		for (int j = 0; j < star; j++)
		{
			if (gogo[j] != str[j])
			{
				res = false;
				break;
			}
		}
		for (int j = 0; j < strSize - star - 1; j++)
		{
			if (gogo[gogoSize - j - 1] != str[strSize - j -1])
			{
				res = false;
				break;
			}
		}
		if (!res) cout << "NE" << "\n";
		else cout << "DA" << "\n";
	}
  return 0;
}
