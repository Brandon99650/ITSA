#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int mon[4];
    
    scanf("%d,%d,%d,%d",&mon[0],&mon[1],&mon[2],&mon[3]);

    if (mon[0] > mon[1] * 15 + mon[2] * 20 + mon[3] * 30) {
        mon[0] = mon[0] - mon[1] * 15 - mon[2] * 20 - mon[3] * 30;
        mon[2] = mon[0] / 50;
        mon[0] %= 50;
        mon[1] = mon[0] / 5;
        mon[0] %= 5;
        printf("%d,%d,%d\n", mon[0], mon[1], mon[2]);
        return 0;
    } else {
        printf("0\n");
        return 0;
    }
}
