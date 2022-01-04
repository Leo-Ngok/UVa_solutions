//p1308
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
string word,tmp;
string str;
int main(){
	getline(cin,word);
	for(int j=0;j<word.size();j++)
	if(word[j]>='A'&&word[j]<='Z')word[j]+=32;
	word=" "+word+" ";
	getline(cin,str);
	str=" "+str+" ";
	for(int i=0;i<str.size();i++)
	if(str[i]>='A'&&str[i]<='Z')str[i]+=32;
	if(str.find(word)!=string::npos)
	{
		int x=str.find(word),occurrences=0;
		int y=x;
		while((x=str.find(word,x))!=std::string::npos){
        	++occurrences;
        	x+=word.size();
   		}
		cout<<occurrences<<" "<<y;
	}else cout<<"-1";
	return 0;
}
