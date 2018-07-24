#include<cstdio>
int f(int x, int y) { return y ? f(y, x%y) : x; }
int t, n, m;
int main() {
    scanf("%d", &t);
    while (t--)scanf("%d %d", &n, &m), printf("%d\n", n*m / f(n, m));
    return 0;
}
