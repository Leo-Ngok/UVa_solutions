//p1328
#include <cstdio>
int a[2][220],n,na,nb,cnt[2];
int main(){
	scanf("%d%d%d",&n,&na,&nb);
	for(int i=1;i<=na;i++)scanf("%d",a[0]+i);
	for(int i=1;i<=nb;i++)scanf("%d",a[1]+i);
	for(int i=1;i<=n;i++){
		int a1=a[0][(i%na==0)?na:i%na];
		int b1=a[1][(i%nb==0)?nb:i%nb];
		if(a1==b1)continue;
		bool k=(a1>b1);
		if(k){int t=a1;a1=b1;b1=t;}
		if(a1==0&&b1==1) cnt[!k]++;
		else if(a1==0&&b1==2)cnt[k]++;
		else if(a1==0&&b1==3)cnt[k]++;
		else if(a1==0&&b1==4)cnt[!k]++;
		else if(a1==1&&b1==2)cnt[!k]++;
		else if(a1==1&&b1==3)cnt[k]++;
		else if(a1==1&&b1==4)cnt[!k]++;
		else if(a1==2&&b1==3)cnt[!k]++;
		else if(a1==2&&b1==4)cnt[k]++;
		else if(a1==3&&b1==4)cnt[k]++;
	}
	printf("%d %d",cnt[0],cnt[1]);
	return 0;
}

