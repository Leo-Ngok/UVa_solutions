//p5728
#include <cstdio>
struct marks{
	int chi,eng,math;
}mark[1010];
int babs(int x){
	return (x>=0)?x:-x;
} 
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d%d%d",&mark[i].chi,&mark[i].math,&mark[i].eng);
	int ans=0;
	for(int i=1;i<=n-1;i++)
	for(int j=i+1;j<=n;j++)
	if(babs(mark[i].chi-mark[j].chi)<=5
	&&babs(mark[i].eng-mark[j].eng)<=5
	&&babs(mark[i].math-mark[j].math)<=5
	&&babs(mark[i].chi-mark[j].chi+mark[i].eng-mark[j].eng+mark[i].math-mark[j].math)<=10)ans++;
	printf("%d",ans);
	return 0;
}
