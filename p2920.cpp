//p2920
#include <cstdio>
#include <algorithm>
#define maxn 1010
struct work{
	int dl,t;
}job[maxn];
bool cmp(work w1,work w2){
	return w1.dl>w2.dl;
}
int n;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&job[i].t,&job[i].dl);
	} 
	std::sort(job+1,job+n+1,cmp);
	int init=job[1].dl;
	for(int i=1;i<n;i++){
		init-=job[i].t;
		if(init>job[i+1].dl) init=job[i+1].dl;
	}
	init-=job[n].t;
	if(init<0)printf("-1");
	else printf("%d",init);
	return 0;
}
