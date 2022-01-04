//p3908
#include <cstdio>
long long n;
int main()
{
	scanf("%lld",&n);
	long long x=n%4;
	switch(x)
	{
		case 0:printf("%lld",n);break;
		case 1:printf("1");break;
		case 2:printf("%lld",n+1);break;
		case 3:printf("0");break;
	}
	return 0;
} 
