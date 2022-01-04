//p3368
#include <cstdio>
int a[1000010],t[2000010],n,m,q,x,y,z;
int lowbit(int x){return x&(-x);}
void change(int pos,int val){while(pos<=n)t[pos]+=val,pos+=lowbit(pos);}
int sum (int pos){
	int ans=0;
	while(pos>0)ans+=t[pos],pos-=lowbit(pos);
	return ans;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
		change(i,a[i]);
	}
	while(m--){
		scanf("%d%d",&q,&x);
		if(q==1){
			scanf("%d%d",&y,&z);
			change(x,z);
			change(y+1,-z);
		}
		else printf("%d\n",sum(x));	
	}
	return 0;
}
