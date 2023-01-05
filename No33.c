#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

int main() {
char num[10001];
while (fgets(num, sizeof(num), stdin)) {
        int Num = 0;
        double count=0;
        char *n = strtok(num, " ");
        while (n != NULL)
        {
            float trans = atoi(n);
            Num++;
            count=count+trans;
            n = strtok(NULL, " ");
        }
        printf("Size: %d\n", Num);
        printf("Average: %.3lf\n", count/Num);
}




return 0;
}