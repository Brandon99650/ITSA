#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n;
    char A[256][256];
    char B[256][256];
    char num;
    while(scanf("%d%d",&m,&n)!=EOF){
        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                num=getchar();
                if(num!='\n'&&num!=' '){
                    A[i][j]=num;
                }
                else if(num==' '){
                    A[i][j]=getchar();
                }
                else if(num=='\n'){

                    break;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                B[j][i]=A[i][j];
            }
        }for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("%c ",B[i][j]);
            }
            printf("\n");
        }

        





    }






    return 0;
}