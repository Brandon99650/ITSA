#include<stdio.h>
#include<string.h>

int main()
{
    char buf[1024], ptr[1024]; 
    int flag = 1; 

    scanf("%s", buf); 
    int len = strlen(buf); 
    for (int i = len - 1; i >= 0; i--)
    {
        ptr[len - 1 - i] = buf[i];
    }

    for (int j = 0; j < len; j++) 
    {
        if (buf[j] != ptr[j]) 
        {
            flag = 0; 
            break; 
        }
        else
        {
            flag = 1; 
        }
    }

    if (flag) 
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }

    return 0;
}
