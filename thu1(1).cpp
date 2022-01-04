#include<bits/stdc++.h>
using namespace std;
int v[20],answer1[20],answer2[20];
char s[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
long long a[5],a2[5];
long long ans1=0x7f7f7f7f7f7f7f7f7f7f7f7f,ans2=0;
void qongju(int n,int num,int t)
{
	if(num==3)
	{
		a[3]=0;a2[3]=0;
		for(int i=1;i<=15;i++)
		{
			if(v[i]==0)a[num]=a[num]*16+i;
		}
		for(int i=15;i>=1;i--)
		{
			if(v[i]==0)a2[num]=a2[num]*16+i;
		}
		long long b=a[1]*a[2]*a[3];
		if(ans1>b)
		{
			ans1=b;
			for(int i=1;i<=15;i++)answer1[i]=v[i];
		}
		b=a2[1]*a2[2]*a2[3];
		if(ans2<b)
		{
			ans2=b;
			for(int i=1;i<=15;i++)answer2[i]=v[i];
		}
		return;
	}
	else if(n==0)
	{
		a[num]=0;a2[num]=0;
		for(int i=1;i<=15;i++)
		{
			if(v[i]==num)a[num]=a[num]*16+i;
		}
		for(int i=15;i>=1;i--)
		{
			if(v[i]==num)a2[num]=a2[num]*16+i;
		}
		qongju(num+4,num+1,1);
		return;
	}
	else for(int i=t;i<=15;i++)
	{
		if(v[i]==0)
		{
			v[i]=num;
			qongju(n-1,num,i);
			v[i]=0;
		}
	}
	return;
}
int main()
{
	qongju(4,1,1);
	cout<<ans1<<endl;
	for(int i=1;i<=15;i++)if(answer1[i]==1)cout<<s[i];cout<<" ";
	for(int i=1;i<=15;i++)if(answer1[i]==2)cout<<s[i];cout<<" ";
	for(int i=1;i<=15;i++)if(answer1[i]==0)cout<<s[i];cout<<endl;
	cout<<endl;
	cout<<ans2<<endl;
	for(int i=15;i>=1;i--)if(answer2[i]==1)cout<<s[i];cout<<" ";
	for(int i=15;i>=1;i--)if(answer2[i]==2)cout<<s[i];cout<<" ";
	for(int i=15;i>=1;i--)if(answer2[i]==0)cout<<s[i];cout<<endl;
	cout<<endl;
	return 0;
}
