#include <cstdio>
#include <cstdlib>
int n,ans=0;
struct seg{
	int l,r;
}s[1010];
int cmp(const void *a,const void *b)
{
	return (((seg*)a)->l-((seg*)b)->l);
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d%d",&s[i].l,&s[i].r);	
	qsort(s,n,sizeof(seg),cmp);
	int lt=s[0].l,rt=s[0].r;
	for(int i=1;i<n;i++)
	{
		if(s[i].l>rt)
		{
			ans+=rt-lt;
			lt=s[i].l;
			rt=s[i].r;
		}
		else
		{
			if(s[i].r>rt)rt=s[i].r;
		}
	}
	ans+=rt-lt;
	printf("%d",ans);
	return 0;
}
