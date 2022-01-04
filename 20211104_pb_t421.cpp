#include <cstdio>
int arr[20],i=0,j=0,cnt=0,m,n,word;
bool exists(int w)
{
    for(int k=i;k<j;k++)
    {
        if(w==arr[k])
        {
            return true;
        }
    }
    return false;    
}
int main()
{
    scanf("%d%d",&m,&n);
    for(int t=1;t<=n;t++)
    {
        scanf("%d",&word);
        if(!exists(word))
        {
            
            arr[j++]=word;
            cnt++;
            if(j-i>m)
            {
                i++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}