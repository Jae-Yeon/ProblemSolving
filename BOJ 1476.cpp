//백준 온라인 저지 1476번 
#include<cstdio>
int e, s, m, r;
int main() {
    scanf("%d %d %d", &e, &s, &m);
    r = (6916 * e + 4845 * s + 4200 * m) % 7980;
    printf("%d", r ? r : 7980);
    return 0;
}
