#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n%400==0){
            printf("Bissextile Year\n");
        }
        else if((n%100!=0)&&(n%4==0)){
            printf("Bissextile Year\n");
        }
        else{
            printf("Common Year\n");
        }
    }





    return 0;
}