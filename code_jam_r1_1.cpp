//round 1a q1
#include <bits/stdc++.h>
using namespace std;
int t,n;
char leftchr[110],rightchr[110];
string str;
vector<string> words;
int lpos,rpos;
bool wrong=0;
int main(){
	cin>>t;
	for(int iii=1;iii<=t;iii++){
		
		wrong=0;
		memset(leftchr,'\0',sizeof(leftchr));
		memset(rightchr,'\0',sizeof(rightchr));
		words.clear();
		cin>>n;
		for(int ii=1;ii<=n;ii++){
		cin>>str;
		int nn=str.size();
		for(int i=0;i<nn;i++){
			if(str[i]=='*'){lpos=i;break;}
		}
		for(int i=nn-1;i>=0;i--){
			if(str[i]=='*'){rpos=i;break;}
		}
		for(int i=0;i<lpos;i++){
			if(leftchr[i]>='A'&&leftchr[i]<='Z'){
				if(leftchr[i]!=str[i]){wrong=1;break;}
			}else leftchr[i]=str[i];
		}
		for(int i=0;i<nn-rpos-1;i++){
			if(rightchr[i]>='A'&&rightchr[i]<='Z'){
				if(rightchr[i]!=str[nn-i-1]){wrong=1;break;}
			}else rightchr[i]=str[nn-i-1];
		}
		string tmp="";
		for(int i=lpos+1;i<rpos;i++){
			if(str[i]!='*')tmp=tmp+str[i];
		}
		words.push_back(tmp);
	}
		printf("Case #%d: ",iii);
		if(!wrong){
			int ln=strlen(leftchr),rn=strlen(rightchr);
			if(ln>0)for(int i=0;i<ln;i++)printf("%c",leftchr[i]);
			if(!words.empty())for(int i=0;i<words.size();i++)cout<<words[i];
			for(int i=rn-1;i>=0;i--)printf("%c",rightchr[i]);
			printf("\n");
		}else printf("*\n");		
	}
	return 0;
}
