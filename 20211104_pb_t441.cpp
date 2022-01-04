#include <stdio.h>
#include <cstdlib>
int n,m;
struct num
{
    int val,type;
}nums[2010];
int cmp(const void *a,const void *b)
{
    if(((num*)a)->val!=((num*)b)->val)
    {
        return ((num*)a)->val-((num*)b)->val;
    }
    else
    {
        return ((num*)a)->type-((num*)b)->type;
    }
}
int main()
{
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i].val);
        nums[i].type=1;
    }
    scanf("%d",&m);
    for(int i=n;i<m+n;i++)
    {
        scanf("%d",&nums[i].val);
        nums[i].type=2;
    }
    qsort(nums,m+n,sizeof(num),cmp);
    for(int i=1;i<m+n;i++)
    {
        if(nums[i-1].val==nums[i].val)
        {
            printf("%d ",nums[i].val);
        }
    }
    printf("\n");
    for(int i=0;i<m+n;i++)
    {
        if(i==0||nums[i-1].val!=nums[i].val)printf("%d ",nums[i].val);
    }
    printf("\n");
    for(int i=0;i<m+n;i++)
    {
        if(nums[i].type==1&&(i==m+n-1||(nums[i+1].val!=nums[i].val)))printf("%d ",nums[i].val);
    }
    printf("\n");
    return 0;
}
