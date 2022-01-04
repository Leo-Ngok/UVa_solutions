#include <cstdio>
int n,_x,_y;
struct mat
{
    int x,y,dx,dy;
}mats[10010];

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d%d",
        &mats[i].x,&mats[i].y,
        &mats[i].dx,&mats[i].dy);
    }
    scanf("%d%d",&_x,&_y);
    for(int i=n-1;i>=0;i--)
    {
        if((_x>=mats[i].x&&_x<=mats[i].x+mats[i].dx)&&
        (_y>=mats[i].y&&_y<=mats[i].y+mats[i].dy))
        {
            printf("%d",i+1);
            return 0;
        }
    }
    printf("-1");
    return 0;
}