#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n/3==1){
			printf("Spring\n");
		}
		else if(n/3==2){
			printf("Summer\n");
		}
		else if(n/3==3){
			printf("Autumn\n");
		}
		else{
			printf("Winter\n");
		}
	}
    return 0;
}