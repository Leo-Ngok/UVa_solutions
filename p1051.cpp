//p1051
//p1051
#include <string>
#include <iostream>
using namespace std;
int n,mark,cmark,sch,maxn=-1,total=0,one;
char gb,w;
string name,hn;
int main(){
	cin>>n;
	while(n--){
		one=0;
		cin>>name>>mark>>cmark>>gb>>w>>sch;
		if(mark>80&&sch>=1)one+=8000;
		if(mark>85&&cmark>80)one+=4000;
		if(mark>90)one+=2000;
		if(mark>85&&w=='Y')one+=1000;
		if(cmark>80&&gb=='Y')one+=850;
		total+=one;
		if(one>maxn){
			hn=name;
			maxn=one;
		}
	}
	cout<<hn<<endl<<maxn<<endl<<total;
	return 0;
}
