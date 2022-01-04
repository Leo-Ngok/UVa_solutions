#include <cstdio>
#include <cstdlib>
int n;
struct student
{
    char name[22];
    int _m,_d,idx;

}stts[102];
int cmp(const void *a,const void *b)
{
    if(((student*)a)->_m!=((student*)b)->_m)
    {
        return ((student*)a)->_m-((student*)b)->_m;
    }
    else if((((student*)a)->_d!=((student*)b)->_d))
    {
        return ((student*)a)->_d-((student*)b)->_d;
    }
    else
    {
        return ((student*)a)->idx-((student*)b)->idx;
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s%d%d",stts[i].name,&stts[i]._m,&stts[i]._d);
        stts[i].idx=i;
    }
    qsort(stts,n,sizeof(student),cmp);
    bool hbd=false,firstrun=true;
    for(int i=1;i<n;i++)
    {
        if((stts[i]._m==stts[i-1]._m)&&(stts[i]._d==stts[i-1]._d))
        {
            if(hbd)
            {
                printf("%s ",stts[i].name);
            }
            else
            {
                hbd=true;
                if(!firstrun)printf("\n");
                printf("%d %d %s %s ",
                stts[i]._m,stts[i]._d,
                stts[i-1].name,stts[i].name);
                firstrun=false;
            }
        }
        else
        {
            hbd=false;
        }
    }
    return 0;
}