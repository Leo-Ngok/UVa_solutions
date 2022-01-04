//p1716
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector<long long> nums;
int main(){
	int n;scanf("%d",&n);
	while(n--){
		long long m;scanf("%lld",&m);
		nums.push_back(m);
	}
	sort(nums.begin(),nums.end());
	bool last=1;
	while(nums.size()){
		if(last==1){	
			printf("%lld\n",nums.back());
			nums.pop_back();
		}else{
			printf("%lld\n",nums[0]);
			nums.erase(nums.begin());
		}
		last=!last;
	}
	return 0;
}
