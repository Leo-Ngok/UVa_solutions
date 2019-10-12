#include<iostream>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	set<int> nums;
	int g=0;
	for(int k=0;k<n;k++){
		cin>>g;
		nums.insert(g);
	}
	cout<<nums.size()<<endl;
	while(nums.size()>0){
		cout<<*nums.begin()<<" ";
		nums.erase(nums.begin());
	}
	return 0;
}
