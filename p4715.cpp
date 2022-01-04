//p4715
#include <cstdio>
struct team{
	int num,val;
}cnty[130];
team winner(int start,int end,bool last){
	if(start==end)return cnty[start];
	team t1=winner(start,(end+start)/2,false);
	team t2=winner((start+end)/2+1,end,false);
	if(last)return (t1.val>t2.val)?t2:t1;
	else return (t1.val<t2.val)?t2:t1;
}
int main(){
	int n;scanf("%d",&n);
	n=1<<n;
	for(int k=1;k<=n;k++){
		scanf("%d",&cnty[k].val);
		cnty[k].num=k;
	}
	team t=winner(1,n,true);
	printf("%d",t.num);
	return 0;
}
