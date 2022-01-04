#include <cstdio>
#include <cstring>
char num1[120],num2[120];
int res[120];
int main()
{
    scanf("%s",num1);
    scanf("%s",num2);
    memset(res,0,sizeof res);
    int n1=strlen(num1),n2= strlen(num2);
    for(int i=0;i<n1;i++)res[i]=num1[n1-1-i]-'0';
    for(int i=0;i<n2;i++)res[i]+=(num2[n2-1-i]-'0');
    int m=(n1>n2)?n1:n2;
    for(int i=0;i<m;i++)
    {
        res[i+1]+=res[i]/10;
        res[i]%=10;
    }
    bool trig=false;
    for(int i=119;i>=0;i--)
    {
        if(res[i]!=0)trig=true;
        if(trig)printf("%d",res[i]);
    }
    return 0;
}
