#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main(){
	string s;
	//char s1[100];
	cin>>s;
	stringstream ss(s);
	vector<string> numlist;
	while(getline(ss,s,'+')) numlist.push_back(s);
	for(int k=0;k<numlist.size();k++)cout<<numlist[k]<<endl;
	return 0;
}
