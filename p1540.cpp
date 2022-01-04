//p1540
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int M,N;cin>>M>>N;
	vector<int> word;
	int ans=0;
	while(N--){
		int q;cin>>q;
		if(find(word.begin(),word.end(),q)==word.end())
		{word.push_back(q);ans++;}
		if(word.size()>M)word.erase(word.begin());
	}
	cout<<ans;return 0;
}
