//p3741
#include <stdio.h>
char str[110];
int a,n;
bool used=0;
int main(){
	scanf("%d%s",&n,str);
	for(int i=0;i<n-1;i++)
	if(str[i]=='V'&&str[i+1]=='K'){a++;str[i]=str[i+1]='M';}
	for(int i=0;i<n-1;i++)
	if(str[i]!='M'&&str[i]==str[i+1]){
		printf("%d",++a);
		return 0;
	}
	printf("%d",a);
	return 0;
}
