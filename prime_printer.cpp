#include <cstdio>
bool isprime(int n)
{
	for(int i=2;i*i<=n;i++)if(n%i==0)return false;
	return true;
}
int main()
{
	freopen("prime_list.txt","w",stdout);
	printf("{");
	for(int i=2;i<=2000000000;i++)
	if(isprime(i))
	printf("%d,",i);
	printf("}");
	fclose(stdout);
	return 0;
}
