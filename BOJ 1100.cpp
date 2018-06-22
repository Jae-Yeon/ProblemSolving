//백준 온라인 저지 1100번 하얀 
#include <iostream>
#include <string>
using namespace std;
int main() {
	string k;
	int cnt = 0;
	for (int i = 0; i < 8; i++)//줄 번호
	{
		cin >> k;
		for (int j = 0; j < 8; j++)//인덱스 번호
			if (k[j] == 'F' && (j + 1) % 2 == 1 && (i + 1) % 2 == 1) // 홀수번째 문자열의 홀수번째 인덱스는 흰색
				cnt++;
			else if (k[j] == 'F' && (j + 1) % 2 == 0 && (i + 1) % 2 == 0)    //짝수번째 문자열의 짝수번째 인덱스는 흰색
				cnt++;
	}
	cout << cnt;
}
