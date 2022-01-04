//maximum and minimum permutation for a hexadecimal number
#include <bits/stdc++.h>
#define unsigned long long ull
using namespace std;

ull MAX_VAL;

ull digits[]={1ULL,2ULL,3ULL,4ULL,5ULL,6ULL,7ULL,8ULL,9ULL,10ULL,11ULL,12ULL,13ULL,14ULL,15ULL};
int idx[20],P_idx[20];
void dfs(int i)
{
	ull a,b,c;
	a=4096*digits[idx[0]]+256*digits[idx[1]]+16*digits[idx[2]]+digits[idx[3]];
	b=65536*digits[idx[4]]+4096*digits[idx[5]]+256*digits[idx[6]]+16*digits[idx[7]]+digits[idx[8]];
	c=1048576*digits[idx[9]]+65536*digits[idx[10]]+4096*digits[idx[11]]+256*digits[idx[12]]+16*digits[idx[13]]+digits[idx[14]];
	if(a*b*c<MAX_VAL) return;
    

}
int main()
{
	
}