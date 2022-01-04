//p5744
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
struct node{
	string name;int age,mark;
};
int n,age,mark;
string str;
int main(){
	scanf("%d",&n);
	node person;
	while(n--){
		cin>>str>>age>>mark;
		mark*=1.2;
		if(mark>600)mark=600;
		cout<<str<<" "<<age+1<<" "<<mark<<endl;
	}
	return 0;
}
