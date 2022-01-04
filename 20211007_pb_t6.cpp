#include <cstdio>

int main()
{
	double s=0.0;
	int k,i=0;
	scanf("%d",&k);
	while(s<=k)
	{
		i++;
		s+=1.0/i;	
	}
	printf("%d",i);
	return 0;
}
