//p5707
#include <cstdio>
int t=470,s,v,t1;
void show(int n){
	printf((n<10)?"0%d":"%d",n);
}
int main(){
	scanf("%d%d",&s,&v);
	t-=(s%v)?s/v+1:s/v;
	t=(t+1440)%1440;
	int hr=t/60;
	int mn=t%60;
	show(hr);printf(":");show(mn);
	return 0;
}
 
