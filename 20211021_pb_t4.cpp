#include <cstdio>
#include <cstring>
int arr[120][120], t[120],n,m,ans=-2147000000;
int _max(int a,int b)
{
	return (a>b)?a:b;
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	scanf("%d",&arr[i][j]);
	
	for(int l=0;l<m;l++)
	{
		memset(t,0,sizeof t);
		for(int r=l;r<m;r++)
		{
			for(int i=0;i<n;i++)t[i]+=arr[i][r];
			int lmax=t[0],gmax=-2147483647;
			for(int i=1;i<n;i++)
			{
				lmax=_max(t[i],lmax+t[i]);
				gmax=_max(gmax,lmax);
			}
			ans=_max(gmax,ans);
		}
	}
	printf("%d",ans);
	return 0;
}
