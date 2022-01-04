//p1093
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool sortfx(const vector<int> &v1,const vector<int> &v2){
	if(v1[4]!=v2[4])return v1[4]>v2[4];
	else if(v1[1]!=v2[1]) return v1[1]>v2[1];
	else return v1[0]<v2[0];
}
int main(){
	int n,a,b,c;cin>>n;
	vector<vector<int> > mark;
	for(int k=1;k<=n;k++){
		cin>>a>>b>>c;
		vector<int> v;
		v.push_back(k);v.push_back(a);v.push_back(b);v.push_back(c);v.push_back(a+b+c);
		mark.push_back(v);
	}
	sort(mark.begin(),mark.end(),sortfx);
	for(int k=1;k<=5;k++){
		cout<<mark[k-1][0]<<" "<<mark[k-1][4]<<endl;
	}
	return 0;
}
