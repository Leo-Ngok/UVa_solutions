#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
ull MAX_VAL=0,a,b,c;
int num[]={1,2,3,4,5,6,7,8,9},max_num[20];
int main()
{
	do
	{
		a=10*num[0]+num[1];
		b=100*num[2]+10*num[3]+num[4];
		c=1000*num[5]+100*num[6]+10*num[7]+num[8];
		//for(int i=0;i<10;i++)printf("%d ",num[i]);
		//printf("\n");
		if(a*b*c>MAX_VAL)
		memcpy(max_num,num,sizeof(num));
	}
	while(next_permutation(num,num+9));
	for(int i=0;i<10;i++)printf("%d ",max_num[i]);
	return 0;
}
