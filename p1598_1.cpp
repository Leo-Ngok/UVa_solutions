#include<cstdio>
//#include<cstring>
using namespace std;
int ff[26];
int main()
{
    int i,j,n,maxn=0;char a[100];
    for(i=0;i<4;i++)
    {
        gets(a);
        //n=strlen(a);
        for(j=0;j<100;j++){
        	if(a[j]=='\0') break;
			if(a[j]>='A'&&a[j]<='Z')ff[a[j]-'A']++;
		}
		
    }
    for(int q=0;q<26;q++)if(maxn<ff[q])maxn=ff[q];
    for(i=maxn;i>0;i--){
    for(j=0;j<26;j++)
    if(ff[j]>=i)printf("* ");else printf("  ");
    printf("\n");
	}
    for(int u=0;u<26;u++)printf("%c ",u+'A');
}
