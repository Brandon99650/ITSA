#include<stdio.h>
#include<stdlib.h>
int main(){
float num,count=0,all=0,mini=0,max=0;
for(int i=0;i<10;i++)
{
    scanf("%f",&num);
    count++;
    if(num<=mini){
       mini=num;
    } 
    else if(num>=max){
        max=num;  
    }
    
}

    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",mini);

     return 0;
}