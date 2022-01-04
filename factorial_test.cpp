#include <cstdio>

int main()
{
	int s=1;
	//scanf("%d",&n);
	for(int n=1;n<=100;n++)
	{
		for(int i=1;i<=n;i++)
		{
			s*=i;
			while(s%10==0)s/=10;
			s%=10000;
		}
		printf("%d\n",s%10);
		s=1;
	}
	return 0;
}
