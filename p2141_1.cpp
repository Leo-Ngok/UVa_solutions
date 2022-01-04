//p2141
#include <cstdio>
#include <algorithm>
int t=0,arr[120],n,s=0;
bool chk[120];
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",arr+i);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int s=arr[i]+arr[j];
			for(int k=0;k<n;k++)
			{
				if(s==arr[k])chk[k]=1;
			}
		}
	}
	for(int i=0;i<n;i++)s+=chk[i];
	printf("%d",s);
	return 0;
}

