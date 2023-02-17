#include<iostream>
#include<string>
#include<queue>
using namespace std;
queue<int> que;
int n, k;
string str;
int main() 
{
	cin >> n;
	for (int i = 0; i < n; i++) 
  {
		cin >> str;

		if (str == "push") 
    {
			cin >> k;
			que.push(k);
		}

		else if (str == "pop") 
    {
			if (que.empty()) cout << "-1";
			else 
      {
				cout << que.front();
				que.pop();
			}
			cout << "\n";
		}
		else if (str == "size") 
    {
			cout << que.size() << "\n";
		}

		else if (str == "empty") 
    {
			cout << que.empty() << "\n";
		}

		else if (str == "front") 
    {
			if (que.empty()) cout << "-1";
			else cout << que.front();
			cout << "\n";
		}

		else 
    {
			if (que.empty()) cout << "-1";
			else cout << que.back();
			cout << "\n";
		}
	}
}
