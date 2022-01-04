#include <cstdio>
#include <cstring>
char str[1005];
int t,l,r;
int freq[30];
int main(int argc,char **argv)
{
    scanf("%s%d",str,&t);
    while(t--)
    {
        memset(freq,0,sizeof freq);
        scanf("%d%d",&l,&r);
        for(int i=l;i<=r;i++)
            freq[str[i]-'a']++;
        for(int i=0;i<26;i++)
            if(freq[i])
            {
                printf("%c:%d ",i+'a',freq[i]);
            }
        printf("\n");
    }
    return 0;
}