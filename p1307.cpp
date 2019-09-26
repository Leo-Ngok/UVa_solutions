char digit[11];
#include <cstdio>
int main(){
	scanf("%s",&digit);
	if(digit[0]=='0'&&digit[1]==0){
		printf("0");
		return 0;
	}
	int end;
	if(digit[0]=='-') end=1;
	else end=0;
	int flag=0;
	if(end==1) printf("-");
	for(int k=10;k>=end;k--){
		if(digit[k]!=0&&digit[k]!='0') flag=1;
		if(flag==1) printf("%c",digit[k]);
	}
	return 0;
}
