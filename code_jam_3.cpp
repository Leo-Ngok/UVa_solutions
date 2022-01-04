//code jam qround question 3
#include <algorithm>
#include <cstdio>
#include <cstring>
struct node{
	int l,r,k;char pep;
}nd[1010];
bool cmp(node a,node b){
	return a.l<b.l;
	//return a.r<b.r;
}
bool cmp1(node a,node b){
	return a.k<b.k;
}
int n,t;
int main(){
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		memset(&nd,0,sizeof nd);
		scanf("%d",&n);
		for(int i=1;i<=n;i++)scanf("%d%d",&nd[i].l,&nd[i].r),nd[i].k=i;
		std::sort(nd+1,nd+n+1,cmp);
		printf("Case #%d: ",q);
		int t1=0,t2=0;
		for(int i=1;i<=n;i++){
			if(nd[i].l>=t1){
				nd[i].pep='C';
				t1=nd[i].r;
			}else if(nd[i].l>=t2){
				nd[i].pep='J';
				t2=nd[i].r;
			}
			else{					
				printf("IMPOSSIBLE");
				goto impos;
			}
		}
		std::sort(nd+1,nd+n+1,cmp1);
		for(int i=1;i<=n;i++)printf("%c",nd[i].pep);
		impos:
			printf("\n");
	}
	return 0;
}
