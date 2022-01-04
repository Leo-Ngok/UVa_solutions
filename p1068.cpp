//p1068
#include <iostream>
#include <algorithm>
using namespace std;
struct mark{int idx,m;};
bool cpfx(const mark &v1,const mark &v2){
	return (v1.m!=v2.m)?v1.m>v2.m:v1.idx<v2.idx;
}
int main(){
	int n,m;cin>>n>>m;
	mark sc[n];
	for(int k=0;k<n;k++)cin>>sc[k].idx>>sc[k].m;	
	sort(sc,sc+n,cpfx);
	int q=sc[int(m*1.5)-1].m;
	int count=0;
	for(int k=0;k<n;k++){
		if(sc[k].m<q)break;
		count++;
	}
	cout<<q<<" "<<count<<endl;
	for(int k=0;k<count;k++){
		cout<<sc[k].idx<<" "<<sc[k].m<<endl;
	}
	return 0;
}
