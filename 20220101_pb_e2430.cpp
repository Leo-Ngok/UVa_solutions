#include <cstdio>
#define MAXN 10e9+4
bool isprime(int k)
{
    if(k==1)return false;
    if(k==2)return true;
    for(int i=2;i*i<=k;i++)
    {
        if(k%i==0)return false;
    }
    return true;
}
int main(int argc,char **argv)
{
    int t=0;
    FILE* primes=fopen("prime_list.txt","w");
    for(int i=2;i<=MAXN;i++)
    {
        if(isprime(i))
        {
            fprintf(primes,"%d,",i);
            t++;
            if(t%10==0)fprintf(primes,"\n");
        }
    }
    fclose(primes);
}