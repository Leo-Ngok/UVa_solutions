#include <cstdio>
#include <cmath>
int main()
{
	int k;
	scanf("%d",&k);
	int n=(-1+sqrt(1.0+8*k)/2)+1;
	for(int i=n;i>=2;i--)
	{
		if((2*k+i-i*i)%(2*i)==0)
		{
			int a=(2*k+i-i*i)/(2*i);
			int b=a+i-1;
			printf("%d %d\n",a,b);
		}
	}
	return 0;
}
