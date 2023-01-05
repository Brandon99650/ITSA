#include<stdio.h>
#include<stdlib.h>
int No12(int n){
    if(n==0||n==1)
	{
		return n+1;
	}
	else{ 
        return No12(n-1)+No12(n/2);
    }
}
int main()
{
	int n=0;
	int m=0;
	scanf("%d",&n);
    m=No12(n);
    printf("%d\n",m);
	return 0;
}