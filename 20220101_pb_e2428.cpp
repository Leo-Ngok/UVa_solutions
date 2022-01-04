#include <cstdio>
#define MAX 10e14+10
long long _min_x=MAX,_min_y=MAX,_max_x=-MAX,_max_y=-MAX;
int n,x0,y0;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&x0,&y0);
        if(x0<_min_x)_min_x=x0;
        if(x0>_max_x)_max_x=x0;
        if(y0<_min_y)_min_y=y0;
        if(y0>_max_y)_max_y=y0;
    }
    if(_max_y-_min_y>_max_x-_min_x)
    {
        printf("%lld\n",_max_y-_min_y);
    }
    else
    {
        printf("%lld\n",_max_x-_min_x);
    }
    return 0;
}