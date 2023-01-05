#include <stdio.h>
int gcd(int m, int n) {
    while(n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}
 
 
int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", gcd(m, n));
    return 0;
}