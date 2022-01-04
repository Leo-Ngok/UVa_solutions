//p3654
#include <cstdio>
char arr[110][110];
int r,c,k,cnt=0;
bool checkcol(int i,int j){
	if(i+k>r)return false;
	for(int x=i;x<i+k;x++)if(arr[x][j]=='#')return false;
	return true;
}
bool checkrow(int i,int j){
	if(j+k>c)return false;
	for(int x=j;x<j+k;x++)if(arr[i][x]=='#')return false;
	return true;
}
int main(){
	scanf("%d%d%d",&r,&c,&k);
	for(int i=0;i<r;i++)scanf("%s",arr[i]);
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++){
		cnt+=checkcol(i,j);
		cnt+=checkrow(i,j);
	}
	if(k==1)cnt/=2;
	printf("%d",cnt);
	return 0;
}

