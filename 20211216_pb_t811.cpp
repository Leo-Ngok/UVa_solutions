#include <cstdio>
int cash[10],n;
int main(int argc, char **argv)
{
    scanf("%d",&n);
    printf("%d ",n/10000);
    n%=10000;
    printf("%d ",n/5000);
    n%=5000;
    printf("%d ",n/1000);
    n%=1000;
    printf("%d ",n/500);
    n%=500;
    printf("%d ",n/200);
    n%=200;
    printf("%d ",n/100);
    n%=100;
    printf("%d ",n/50);
    n%=50;
    printf("%d ",n/20);
    n%=20;
    printf("%d",n/10);
    return 0;
}