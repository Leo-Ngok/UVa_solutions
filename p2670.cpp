//p2670
#include <iostream>
#define size 102
#include <memory.h>
using namespace std;
int grid[size][size];
int n,m;
char token[size];
int main()
{
	memset(grid,0, sizeof(grid[0][0])*size*size);
	cin>>n>>m;
	for(int k=1;k<=n;k++)
	{
		cin>>token;
		for(int l=1;l<=m;l++)
		{
			if(token[l-1]=='*')grid[k][l]=-1;
		}
	}
	for(int a=1;a<=n;a++)
	{
		for(int b=1;b<=m;b++)
		{
			if(grid[a][b]==-1)continue;
			if(grid[a-1][b-1]==-1)grid[a][b]++;
			if(grid[a-1][b]==-1)grid[a][b]++;
			if(grid[a-1][b+1]==-1)grid[a][b]++;
			if(grid[a][b-1]==-1)grid[a][b]++;
			if(grid[a][b+1]==-1)grid[a][b]++;
			if(grid[a+1][b-1]==-1)grid[a][b]++;
			if(grid[a+1][b]==-1)grid[a][b]++;
			if(grid[a+1][b+1]==-1)grid[a][b]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(grid[i][j]!=-1)cout<<grid[i][j];
			else cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
