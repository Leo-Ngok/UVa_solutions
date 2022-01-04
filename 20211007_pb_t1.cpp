#include <cstdio>

int main()
{
	int n;
	scanf("%d",&n);
	int d=n/1440;
	int h=(n%1440)/60;
	int m=(n%1440)%60;
	printf("%d %d %d",d,h,m);
	return 0;
}
