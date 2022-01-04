//p1104
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct person{
	int y,m,d,k;
	string name;
	bool operator <(const person &p2){
		if(y!=p2.y)return y<p2.y;
		else if(m!=p2.m)return m<p2.m;
		else if(d!=p2.d)return d<p2.d;
		else if(k!=p2.k)return k>p2.k;
	}
}per[110];

int main(){
	int n;cin>>n;
	for(int k=0;k<n;k++){
		cin>>per[k].name>>per[k].y>>per[k].m>>per[k].d;
		per[k].k=k;
	}
	sort(per,per+n);
	for(int k=0;k<n;k++)cout<<per[k].name<<endl;
	return 0;
} 
