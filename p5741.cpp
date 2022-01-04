//p5741
#include <string>
#include <iostream>
using namespace std;
struct student{
	string name;int chi,eng,maths;
}stnt[1010];
int gabs(int x){
	return x>=0?x:-x;
}
bool cdt(student st1,student st2){
	int a1=gabs(st1.chi-st2.chi);
	int a2=gabs(st1.eng-st2.eng);
	int a3=gabs(st1.maths-st2.maths);
	int a4=gabs(st1.chi-st2.chi+st1.eng-st2.eng+st1.maths-st2.maths);
	if(a1<=5&&a2<=5&&a3<=5&&a4<=10)return true;
	return false;
}
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>stnt[i].name>>stnt[i].chi>>stnt[i].maths>>stnt[i].eng;
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(cdt(stnt[i],stnt[j]))cout<<stnt[i].name<<" "<<stnt[j].name<<endl;
		}
	}
	return 0;
}
