#include <cstdio>
#include <cstdlib>
int n,m,k=0,cnt=1,l1,r1=-1;
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
struct seg
{
    int l,r;
}segments[25002];
inline int cmp(const void *a, const void *b)
{
    seg *aa=(seg*)a;
    seg *bb=(seg*)b;
    if(aa->l==bb->l)
    {
        return aa->r-bb->r;
    }
    else
    {
        return aa->l-bb->l;
    }
}
int main(int argc, char **argv)
{
    n=read();m=read();
    for(register int i=0;i<n;i++)
    {
        segments[i].l=read();
        segments[i].r=read();
        if(segments[i].r>r1)r1=segments[i].r;
    }
    qsort(segments,n,sizeof(seg),cmp);
    l1=segments[0].l;
    if(l1>1||r1<m)
    {
        puts("-1");
        return 0;
    }
    register int i;
    for(i=0;i<n;i++)
    {
        if(segments[i+1].l>1)break;
    }
    int curr_end=segments[i].r;
    int prev_end=curr_end;
    while(i<n&&curr_end<m)
    {
        curr_end=0;
        if(i<n&&segments[i].l>prev_end+1)
        {
            puts("-1");
            return 0;
        }
        while(segments[i].l<=prev_end+1)
        {
            if(segments[i].r>curr_end)
            curr_end=segments[i].r;
            i++;
        }
        prev_end=curr_end;
        cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}