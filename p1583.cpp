#include<iostream>
#include<algorithm>
using namespace std;
int n,e[17],k;
struct node{
    int sum,num;
}a[20007];
bool cmp(node x,node y)
{
    if(x.sum!=y.sum) return x.sum>y.sum;
    else return x.num<y.num;
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=10;i++)
    cin>>e[i];
    for(int i=1;i<=n;i++)
    cin>>a[i].sum,a[i].num=i;
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++)a[i].sum+=e[(i-1)%10+1];
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=k;i++)
    cout<<a[i].num<<' ';
    return 0;
}
