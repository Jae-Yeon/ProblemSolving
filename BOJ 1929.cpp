#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int M, N, cnt = 0, p = 0, total = 0;

	cin >> M >> N;
	int *arr = new int[N - M + 1];
	for (int i = M; i <= N; i++){
		arr[p] = i;
		p++;
	}
	p = 0;
	for (int i = 2; i <= sqrt(N); i++){
		for (int j = 0; j < N - M + 1; j++){
			if (arr[j] == -1)	{
				continue;
			}
			if (arr[j] % i == 0 && arr[j] != i)	{
				arr[j] = -1;
			}
		}
	}
	for (int i = 0; i < N - M + 1; i++)	{
		if (arr[i] == 1)
			continue;
		if (arr[i] != -1)
			cout << arr[i] << '\n';
	}
}

