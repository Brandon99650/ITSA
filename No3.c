#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    double x,y;
    double num;
    while( scanf("%lf %lf",&x,&y)!=EOF){
        num=x*x+y*y;
        //printf("%lf\n",num);
        if((num)<=10000){
            printf("inside\n");
        }
        else{
            printf("outside\n");
        }

    }




    return 0;
}