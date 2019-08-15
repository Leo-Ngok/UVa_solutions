#include <cstdio>
#include <math.h>
int main()
{
    long n;
    while((scanf("%ld",&n)==1)&&(n!=0))
    {
    long i=sqrt(n);
    if(n==i*i) printf("yes\n");
    else printf("no\n");
    }
    return 0;
}