#include <cstdio>

const int arr[5][4]=
{
    {2,1,0,2},
    {1,1,1,1},
    {0,0,2,1},
    {0,3,0,0},
    {1,0,0,1}
};
int freq[5],ingr[4];
inline int read()
{
    int s=0,t=1;char c=getchar();
    while(c<'0'||c>'9')
    {
        if(c=='-')t=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9')
    {
        s=s*10+(c-'0');
        c=getchar();
    }
    return s*t;
}
inline bool judge(int i)
{
    for(register int j=0;j<4;j++)
    {
        if(arr[i][j]>ingr[j])
        {
            return false;
        }
    }
    return true;
}
inline void cook(int i)
{
    for(register int j=0;j<4;j++)
    {
        ingr[j]-=arr[i][j];
    }
    freq[i]++;
}
int main(int argc,char **argv)
{
    for(register int i=0;i<4;i++)
    {
        ingr[i]=read();
    }
    for(register int i=0;i<5;i++)
    {
        while(judge(i))
        {
            cook(i);
        }
    }
    for(register int i=0;i<5;i++)
    {
        printf("%d\n",freq[i]);
    }
    return 0;
}