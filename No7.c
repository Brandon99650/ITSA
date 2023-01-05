#include<stdio.h>

int main()
{
	int num=0;
	int a_i=0,a=0,b_i=0,b=0,c_i,c;
	scanf("%d", &num);
	for(int i=0;i<num;i++)//依據輸入的行數遞減計算次數 
	{
		
		char w;//運算符號 
		
		scanf(" %c%d%d%d%d", &w, &a_i, &a, &b_i, &b);
        if(w=='+'){
            c_i=a_i+b_i;
            c=a+b;
            printf("%d %d\n",c_i,c );
            continue;
        }
        if(w=='-'){
            c_i=a_i-b_i;
            c=a-b;
            printf("%d %d\n",c_i ,c );
            continue;
        }
        if(w=='*'){
            c_i= a_i*b_i-a*b;
            c=a*b_i+a_i*b;
            printf("%d %d\n",c_i ,c );
            continue;
        }
        if(w=='/'){
            c_i=(a_i*b_i+a*b)/(b_i*b_i+b*b);
            c=(a*b_i-a_i*b)/(b_i*b_i+b*b);
            printf("%d %d\n",c_i ,c );
            continue;
        } 
		
	}
	return 0;
} 
