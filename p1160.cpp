//p1160
#include <cstdio>
#include <cstring>
int left[100010],right[100010],n,m,a,b;
void insr(int x,int y){
	left[y]=x;	
	if(right[x]!=-1)right[y]=right[x];
	right[x]=y;
	if(right[y]!=-1)left[right[y]]=y;
}
void insl(int x,int y){
	insr(left[x],y);
}
void del(int x){
	if(left[x]!=-1)right[left[x]]=right[x];
	if(right[x]!=-1)left[right[x]]=left[x];
	left[x]=right[x]=-1;
}
int main(){
	scanf("%d",&n);
	memset(left,-1,sizeof(left));
	memset(right,-1,sizeof(right));
	insr(0,1);
	for(int i=2;i<=n;i++){
		scanf("%d%d",&a,&b);
		insr((b==0)?left[a]:a,i);
	}
	scanf("%d",&m);
	while(m--){
		scanf("%d",&a);
		del(a);
	}
	int x=right[0];
	while(x!=-1){
		printf("%d ",x);
		x=right[x];
	}
	return 0;
}
