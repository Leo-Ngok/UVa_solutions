// p1591
#include <cstdio>
#include <cstring>
int dig[3000];
void reset(){
	memset(dig,0,sizeof(dig));
	//memset(dgcnt,0,sizeof(dgcnt));
	dig[0]=1;
}
void factorial(int n){
	for(int i=1;i<=n;i++){
		for(int j=0;j<2600;j++)dig[j]*=i;
		for(int j=0;j<2600;j++){
			dig[j+1]+=dig[j]/10;
			dig[j]%=10;
		}		
	}
}
int t,n1,a,cnt=0;
int main(){
	scanf("%d",&t);
	while(t--){
		cnt=0;
		scanf("%d%d",&n1,&a);
		reset();
		factorial(n1);
		bool flg=0;
		for(int i=2600;i>=0;i--){
			if(dig[i]!=0)flg=1;
			if(dig[i]==a&&flg)cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}
