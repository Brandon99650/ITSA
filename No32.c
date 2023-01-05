#include <stdio.h>
#include <string.h>

int main(void)
{
    char in[100];
    int p;
    fgets(in, sizeof in, stdin);
    scanf("%d", &p);
    int len = strlen(in);
    for (int i = 0; i < len; i++) {
        if (in[i] >= 'A' && in[i] <= 'Z') {
            in[i] = (char)(((int)(in[i] - 'A') + p) % 26 + 'A');
        }
        if (in[i] >= 'a' && in[i] <= 'z') {
            in[i] = (char)(((int)(in[i] - 'a') + p) % 26 + 'a');
        }
        if (in[i] >= '0' && in[i] <= '9') {
            in[i] = (char)(((int)(in[i] - '0') + p) % 10 + '0');
        }
    }
    printf("%s", in);
    return 0;
}
