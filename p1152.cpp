//p1152
#include <cstdio>
#include <cstring>
bool num[1010];
int n,prev,curr;
int nabs(int x){
	return x>=0?x:-x;
}
int main(){
	scanf("%d%d",&n,&prev);
	for(int i=1;i<=n-1;i++){
		scanf("%d",&curr);
		int k=nabs(curr-prev);
		if(k<n)num[k]=1;
		prev=curr;
	}
	for(int i=1;i<=n-1;i++){
		if(num[i]==0){
			printf("Not jolly");return 0;
		}
	}
	printf("Jolly");
	return 0;
}
