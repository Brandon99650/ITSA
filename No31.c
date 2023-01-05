#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char num[10001];
    while (fgets(num, sizeof(num), stdin))
    {
        int Num = 0;
        char *n = strtok(num, " ");
        
        int maxf = 0, maxNUM = 0;
        int hash[10001] = { 0 };
        while (n != NULL)
        {
            int trans = atoi(n);
            //printf("%d ",t);
            Num++;
            if(trans<0){
                trans=trans+10000;
            }
            hash[trans]+=1;
            //printf("c[t]:%d \n",c[t]);
            if (hash[trans] > maxNUM)
            {
                maxNUM = hash[trans];
                maxf = trans;
            }
            n = strtok(NULL, " ");
        }
        if (maxNUM > Num / 2)
        {
            if(maxf>9000){
                printf("%d\n", maxf-10000);
                
            }
            else{
            printf("%d\n", maxf);
            }
        }
        else
        {
            printf("NO\n");
        }
        memset(hash, 0, sizeof(hash));
    }
    return 0;
}
