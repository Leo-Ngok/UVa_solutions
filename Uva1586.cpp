//uva1586
#define length 80
#include <cstdio>
#include <cstring>
#include <cctype>
#include <math.h>
int main(void){
	int f,b=0;
	scanf("%d",&f);
	char fx[length];
	double a,sum=0;
	
	while(f--){		
		scanf("%s",fx);
		int n=strlen(fx);
		for(int k=0;k<n;k++){
			if(isalpha(fx[k])){
				sum+=a*b;
				if(fx[k]=='H')a=1.008;
				else if(fx[k]=='C')a=12.01;
				else if(fx[k]=='N')a=14.01;
				else if(fx[k]=='O')a=16.00;
			}else{
				if(isdigit(fx[k-1])){
					b=b*10+fx[k]-'0';
				}else{
					b=fx[k]-'0';
				}			
			}		
		}
		sum+=a*b;
		printf("%.3f\n",sum);
	}
	return 0;
}
