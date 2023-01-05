#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int x;
    double mile;
    while( scanf("%d",&x)!=EOF){
        mile=1.6*x;
        printf("%.1lf\n",mile);
    

    }




    return 0;
}