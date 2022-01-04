//p2550
#include <cstdio>
int tkn[40],freq,n,t,cnt[10];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=7;i++)
	{
		scanf("%d",&t);
		tkn[t]=1;
	}
	for(int i=1;i<=n;i++)
	{
		freq=0;
		for(int j=1;j<=7;j++)
		{
			scanf("%d",&t);
			if(tkn[t])freq++;
		}
		cnt[freq]++;
	}
	for(int i=7;i>=1;i--)printf("%d ",cnt[i]);
	return 0;
}
