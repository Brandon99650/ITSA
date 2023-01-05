#include <stdio.h>

int main(void)
{
long double r, count;
long int n, p;
scanf("%Lf", &r);
scanf("%ld", &n);
scanf("%ld", &p);

count = 0;
for (int i=0;i<n;i++)
{
count += p;
count *= (1.0 + r);
}
printf("%lld\n", (long long)count);
return 0;
}
