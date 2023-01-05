#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 0;
    int Bin[8];

    while(scanf("%d", &n)!=EOF){
    if (n < 0) {
        n += 256; 
    }
    for (int i = 7; i >= 0; i--) 
    {
        Bin[i] = n % 2; 
        n=n/2; 
    }

    for (int i = 0; i < 8; i++) 
    {
        if(i==7){
            printf("%d\n", Bin[i]);
            break;
        }
        printf("%d", Bin[i]);
        
 
    }
    }

    return 0;
}
