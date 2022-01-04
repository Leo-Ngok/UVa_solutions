//p1376
#include<cstdio>
long long ans,sum,tmp,f,n,s;
int main(){
    scanf("%lld%lld",&n,&s);
    scanf("%d%d",&sum,&tmp);
    ans+=sum*tmp;
    f=sum;
    for(int i=2;i<=n;i++){
        scanf("%d%d",&sum,&tmp);
        if(f+s<sum)f+=s;
        else f=sum;
    	ans+=f*tmp;
    }
    printf("%lld\n",ans);
    return 0;
}
