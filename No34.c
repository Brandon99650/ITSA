#include<stdio.h>
int main(){
    int height;
    int s;
    float BMI;
    while(scanf("%d%d",&height,&s)!=EOF){
        if(s==1){
            BMI=(height-80)*0.7;
        }
        else{
            BMI=(height-70)*0.6;
        }
        printf("%.1f\n",BMI);
    }




    return 0;
}