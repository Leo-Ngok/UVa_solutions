#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
string word;
int num[26]={1,2,3,1,2,3,
			 1,2,3,1,2,3,1,2,3,
			 1,2,3,4,1,2,3,1,2,3,4};
int main(){
	getline(cin,word);
	int n=word.length();
	int c=0;
	for(int k=0;k<n;k++){
		if(word[k]>='a'&&word[k]<='z')c+=num[word[k]-'a'];
		if(word[k]==' ')c++;
	}
	cout<<c;return 0;
}
