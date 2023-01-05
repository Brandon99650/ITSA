#include <stdio.h>
#include <stdio.h>
int main()
{
     int n, i;
 
    while(scanf("%d",&n)!=EOF){
        int k=0;

        if(n==1||n==0){
            printf("NO\n");
            continue;
 
        }
    for(i=2; i*i<=n; i++)
    {
 
        if(n%i==0)
        {
            k=1;
            break;
        }
    }
 
    if (k==0)
        printf("YES\n");
    else
        printf("NO\n");
    }
    return 0;
}