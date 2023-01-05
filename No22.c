#include<stdio.h>
int main(){
    int A[3][3];
    for(int i=0;i<3;i++)
    {
        scanf("%d %d %d",&A[i][0],&A[i][1],&A[i][2]);    
    }
    for(int i=0;i<3;i++)
    {
         if(A[i][0]==A[i][1]&&A[i][1]==A[i][2])
        {
                printf("True\n");
                return 0;        
        }  
    }
    
	for(int j=0;j<3;j++)
	{
        if(A[0][j]==A[1][j]&&A[1][j]==A[2][j]) 
        {
            printf("True\n");
            return 0;
        }
    }
	if(A[0][0]==A[1][1]&&A[1][1]==A[2][2])
	{
	    printf("True\n");
        return 0;
    }
	else if(A[0][2]==A[1][1]&&A[1][1]==A[2][0])
	{
	    printf("True\n");
        return 0;
    }
	else {printf("False\n");}
    return 0;//都沒有 
}