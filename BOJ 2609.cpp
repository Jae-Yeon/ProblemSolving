#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int maxx=1;
	int temp= max(n,m);
	
	for(int i=1;i<=temp;i++)
	{
		for(int j=2;j<=temp;j++)
		{
			if(n%j==0 && m%j==0)
			{
				maxx=maxx*j;
				n /=j;
				m /=j;
			}
		}
	}
	cout << maxx << "\n";
	cout << maxx*m*n << "\n";
}
