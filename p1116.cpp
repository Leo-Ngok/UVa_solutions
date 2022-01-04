//p1116
#include <cstdio>
int blist[10010],count,ans=0;
void swap(int &a,int &b){
	if(a>b){int t=a;a=b;b=t;}
}
void bubblesort(){
	for(int i=0;i<count-1;i++){
		int s=0;
		for(int k=0;k<count-1-i;k++){
			if(blist[k]>blist[k+1]){
			swap(blist[k],blist[k+1]);s=1;ans++;}
		}
		if(s==0)break;
	}
}
int main(){
	scanf("%d",&count);
	for(int i=0;i<count;i++)scanf("%d",blist+i);
	bubblesort();
	printf("%d",ans);
}
