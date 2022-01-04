//p1003
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n;cin>>n;
	vector<vector<int> >coord;
	for(int k=1;k<=n;k++){
		int a,b,c,d;cin>>a>>b>>c>>d;
		vector<int> f;
		f.push_back(k);
		f.push_back(a);
		f.push_back(b);
		f.push_back(c+a);
		f.push_back(d+b);
		coord.push_back(f);
	}
	int x,y;cin>>x>>y;
	int s=0;
	for(int j=0;j<n;j++){
		if((x>=coord[j][1]&&x<=coord[j][3])&&(y>=coord[j][2]&&y<=coord[j][4])){
			s=coord[j][0];
		}
	}
	if(s==0)cout<<--s;
	else cout<<s;
	return 0;
}
