#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int ans = 1e9;
	cin >> n;
	
	vector<int> vec(n);
	for(int i = 0; i < n; i++)
		cin >> vec[i];

	sort(vec.begin(), vec.end());

	for(int i = 0; i < n - 3; i++)
	{
		for(int j = i + 3; j < n; j++)
		{
			int left = i + 1;
			int right = j - 1;
			
			while(left < right)
			{
				int anna = vec[i] + vec[j]; 
				int elsa = vec[left] + vec[right]; 
				int dif = elsa - anna; 
				
				ans = min(ans, abs(dif));

				if(dif > 0) right--; 
				else left++;
			}
		}
	}
	cout << ans << endl;
}
