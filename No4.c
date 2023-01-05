#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int in_h,in_min,ou_h,ou_min;
    int x,y;
    scanf("%d %d",&in_h,&in_min);
    scanf("%d %d",&ou_h,&ou_min);
    x=60*in_h+in_min;
    y=60*ou_h+ou_min;
    int top=60*24;
    int time=y-x;
    int money=0;
    if (y<x){
        time=top-x+y;

    }
    if(time<=120){
        money=(time/30)*30;
    }
    else if(time<240){
        money=((time-120)/30)*40+120;
    }
    else if(time==240){
        money=240;
    }
    else if(time>240){
        money=(time-240)/30*60+280;
    }
    printf("%d\n",money);




    return 0;
}