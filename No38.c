#include <stdio.h>
#include <stdlib.h>

int main() {
    double m, n = 0, s = 0;

while (scanf("%lf", &m)!=EOF)
{
    if (m > 700) {
        s += (m - 700) * 5.63;
        n += (m - 700) * 4.5;
        m = 700;
    }
    if (m > 500) {
        s += (m - 500) * 4.97;
        n += (m - 500) * 4.01;
        m = 500;
    }
    if (m > 330) {
        s += (m - 330) * 4.39;
        n += (m - 330) * 3.61;
        m = 330;
    }
    if (m > 120) {
        s += (m - 120) * 3.02;
        n += (m - 120) * 2.68;
        m = 120;
    }
    if (m > 0) {
        s += m * 2.1;
        n += m * 2.1;
    }

    printf("Summer months:%.2lf\n", s);
    printf("Non-Summer months:%.2lf\n", n);
}

    

    return 0;
}
