//백준 온라인 저지 1727번 커플 만들기
#include<stdio.h>
#include<algorithm>
 
int men[1005];
int women[1005];
int D[1005][1005];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
 
    for (int i = 1; i <= n; ++i)
        scanf("%d", &men[i]);
    for (int i = 1; i <= m; ++i)
        scanf("%d", &women[i]);
    std::sort(men + 1, men + 1 + n);
    std::sort(women + 1, women + 1 + m);
 
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            if(i==j) 
                D[i][j] = D[i - 1][j - 1] + std::abs(men[i] - women[j]);
            else if (i > j)  {
                D[i][j] = std::min(D[i - 1][j - 1] + std::abs(men[i] - women[j]), D[i - 1][j]);
            }
            else{
                D[i][j] = std::min(D[i - 1][j - 1] + std::abs(men[i] - women[j]), D[i][j - 1]);
            }   
        }
    }
    printf("%d", D[n][m]);
    return 0;
}
