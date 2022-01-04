//p1125
#include <cstdio>
#include <math.h>
#include <cstring>
int a[26];
bool isprime(int n){
	if(n<=1)return false;
	for(int k=2;k<=sqrt(n);k++){
		if(n%k==0)return false;
	}
	return true;
}
int main(){
	memset(a,0,26);
	char str[100];scanf("%s",str);
	int n=strlen(str);
	for(int k=0;k<n;k++){
		if(str[k]>='a'&&str[k]<='z'){
			a[str[k]-'a']++;
		}
	}
	int minn=101,maxn=0;
	//char minchr,maxchr;
	for(int k=0;k<26;k++){
		if(a[k]>maxn)maxn=a[k];
		else if(a[k]<minn&&a[k]>0)minn=a[k];
	}
	if(isprime(maxn-minn)){
		printf("Lucky Word\n%d",maxn-minn);
	}else printf("No Answer\n0");
	return 0;
}
