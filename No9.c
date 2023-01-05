#include<stdio.h>
int main(){
int n;

while(scanf("%d",&n)!=EOF){
    int num=0;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            num=num+i;
        }
    }
    printf("%d\n",num);

}
 

return 0; 
}