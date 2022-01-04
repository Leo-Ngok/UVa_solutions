//p1151
#include <cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int f=0;
	for(int k=10000;k<=30000;k++){
		int a=k/100;
		int b=k%10000/10;
		int c=k%1000;
		if(a%n==0&&b%n==0&&c%n==0){
			printf("%d\n",k);
			f=1;
		}
	}
	if(f==0)printf("No");
	return 0;
}
