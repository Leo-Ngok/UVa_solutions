#include <cstdio>
using namespace std;

int main()
{
    //cout<<"Hello World";
    int i;
    int x0,y0,x,y;
    while((scanf("%d",&i)==1)&&(i!=0)){
        scanf("%d %d",&x0,&y0);
        for(int k=1;k<=i;k++){
            scanf("%d %d",&x,&y);
            if((x==x0)||(y==y0))printf("divisa\n");
            else if((x>x0)&&(y>y0))printf("NE\n");
            else if((x<x0)&&(y>y0))printf("NO\n");
            else if((x<x0)&&(y<y0))printf("SO\n");
            else if((x>x0)&&(y<y0))printf("SE\n");
        }
    }
    return 0;
}