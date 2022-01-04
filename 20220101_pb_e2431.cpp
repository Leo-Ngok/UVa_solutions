#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int mat[102][102],n,m,tttt,_temp,opt1,opt2,opt3,opt4,opt5;
char opt;
void print_mat()
{
    
    for(int i=1;i<=n;i++)
    {for(int j=1;j<=m;j++)
    printf("%3d ",mat[i][j]);
    printf("\n");
    }
}
void update(int x1,int y1,int x2,int y2,int val)
{
    for(int i=x1;i<=x2;i++)
    for(int j=y1;j<=y2;j++)
        mat[i][j]+=val;
}
void swap(int i,int j)
{
    for(int k=1;k<=m;k++)
    {
        _temp=mat[i][k];
        mat[i][k]=mat[j][k];
        mat[j][k]=_temp;
    }
}
void query(int i,int j)
{
    printf("%d\n",mat[i][j]);
}
int main(int argc,char **argv)
{
    memset(mat,0,sizeof(mat));
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
        scanf("%d",&mat[i][j]);
    }
    cin>>tttt;
    while(tttt--)
    {
        cin>>opt>>opt1>>opt2;
        if(opt=='A')scanf("%d%d%d",&opt3,&opt4,&opt5);
        switch (opt)
        {
            case 'A':
                update(opt1,opt2,opt3,opt4,opt5);
                break;
            case 'E':
                swap(opt1,opt2);
                break;
            case 'Q':
                query(opt1,opt2);
                break;
            default:
                break;
        }
#ifdef DEBUG
        print_mat();
#endif
    }
    return 0;
}
