#include<stdio.h>
int main()
{
	int n=0;
    int time[24]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int s=0,d=0;
		scanf("%d%d",&s,&d);
		for(int j=s-1;j<d-1;j++){
            time[j]++;}
	}
	n=time[0];
	for(int i=0;i<24;i++){
        if(n<time[i]){
            n=time[i];
        }
    }
	printf("%d\n",n);
	return 0;
}