#include <cstdio>
int max(int a,int b)
{
    return (a>b)?a:b;
}
int arr[1000];
int global_M=-2000000000,local_M,n;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",arr+i);
    local_M=arr[0];
    for(int i=1;i<n;i++)
    {
        local_M=max(arr[i],local_M+arr[i]);
        global_M=max(global_M,local_M);
    }
    printf("%d",global_M);
    return 0;
}