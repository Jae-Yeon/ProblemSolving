#include<iostream>
using namespace std;
long long n;
long long cnt;
int main()
{
	cin >> n;
	cnt = (long long)(((3 * n * n) + (5 * n) + 2) / 2);
	cout << cnt % 45678 << "\n";
	
	return 0;
}
