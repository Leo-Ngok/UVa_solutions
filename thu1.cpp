#include<bits/stdc++.h>
using namespace std;
int v[20],answer[20];
long long a[5];
long long ans=0;
void qongju(int n,int num,int t)
{
	if(num==3)
	{
		a[3]=0;
		for(int i=15;i>=1;i--)
		{
			if(v[i]==0)a[num]=a[num]*10+i;
		}
		long long b=a[1]*a[2]*a[3];
		if(ans<b)
		{
			ans=b;
			for(int i=1;i<=15;i++)answer[i]=v[i];
		}
		ans=max(ans,b);cout<<ans<<"  ";for(int j=1;j<=15;j++)cout<<v[j]<<" ";cout<<endl;
		return;
	}
	else if(n==0)
	{
		a[num]=0;
		for(int i=15;i>=1;i--)
		{
			if(v[i]==num)a[num]=a[num]*10+i;
		}//cout<<n<<num<<endl;for(int j=1;j<=15;j++)cout<<v[j]<<" ";cout<<endl;//system("pause");
		qongju(num+4,num+1,1);
		return;
	}
	else for(int i=t;i<=15;i++)
	{
		if(v[i]==0)
		{
			v[i]=num;//cout<<n<<num<<endl;for(int j=1;j<=15;j++)cout<<v[j]<<" ";cout<<endl;//system("pause");
			qongju(n-1,num,i);
			v[i]=0;
		}
	}
	return;
}
int main()
{
	qongju(4,1,1);
	cout<<ans<<endl;
	for(int i=1;i<=15;i++)cout<<answer[i]<<" ";
	cout<<endl;
	return 0;
}
