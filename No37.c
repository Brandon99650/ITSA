#include <stdio.h>

int main() {
    int ds[6], in = 0;
    for (int i = 0; i < 6; i++) {
        ds[i] = 0;
    }
    for (int j = 0; j < 4; j++) {
        scanf("%d", &in);
        for (int i = 0; i < 6; i++) {
            if (i + 1 == in) {
                ds[i]++;
                break;
            }
        }
    }
    int d[3];
    in = 2;
    for (int i = 0; i < 3; i++) {
        d[i] = 0;
    }
    for (int i = 0; i < 6; i++) {
        if (ds[i] > 0) {
            d[in] = (i + 1) * 10 + ds[i];
            in--;
        }
    }
    if (d[2] % 10 == 4) {
        printf("WIN\n");
        return 0;
    }
    if (d[2] % 10 == 3) {
        printf("R\n");
        return 0;
    }
    if (d[2] % 10 == 2) {
        if (d[1] % 10 == 2) {
            printf("%d\n", d[1] / 10 * 2);
            return 0;
        } else {
            printf("%d\n", d[1] / 10 + d[0] / 10);
            return 0;
        }
    }
    if (d[2] % 10 == 1) {
        if (d[1] % 10 == 3) {
            printf("R\n");
            return 0;
        } else if (d[1] % 10 == 2) {
            printf("%d\n", d[2] / 10 + d[0] / 10);
            return 0;
        } else {
            if (d[0] % 10 == 2) {
                printf("%d\n", d[2] / 10 + d[1] / 10);
                return 0;
            } else {
                printf("R\n");
                return 0;
            }
        }
    }
}
