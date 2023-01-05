#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char isbn[11];
    for(int i=0;i<10;i++){
    scanf("%c ", &isbn[i]);
    }
    isbn[10]='\0';
    int digits[10];
    for (int i = 0; i < 10; i++)
    {
        if (isbn[i] == 'X')
        {
            digits[i] = 10;
        }
        else
        {
            digits[i] = isbn[i] - '0';
        }
    }

    int identifier = 0;
    for (int i = 0; i < 10; i++)
    {
        identifier += digits[i] * (i + 1);
    }

    if (identifier % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
