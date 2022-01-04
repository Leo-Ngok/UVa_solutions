#include <bits/stdc++.h>
using namespace std;

string str;


int t,a,b,l,r,px1,px2,py1,py2;

int main()
{
	scanf("%d%d%d",&t,&a,&b);
	int dx[]={-500000000,0,500000000};
	for(int casecnt=1;casecnt<=t;casecnt++){
		int px,py;
		//first approximate the range of the circle
		for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			printf("%d %d\n",dx[i],dx[j]);
			fflush(stdout);
			cin>>str;
			if(str=="CENTER")goto phere;
			else if(str=="HIT"){
				px=dx[i],py=dx[j];break;
			}
			else if(str=="WRONG")return 0;
		}
		//find one point that is on the circle
		r=1000000000;
		while(py<r)
		{
			int mid=(py+r)/2;
			printf("%d %d\n",px,mid);
			fflush(stdout);
			cin>>str;
			if(str=="CENTER") goto phere;
			else if(str=="HIT") py=mid;
			else if(str=="WRONG")return 0;
			else r=mid-1;
		}
		px1=px,py1=py,px2=px,py2=py;
		l=-1000000000;
		//find the point below the previous point on the circle
		while(l<py1)
		{
			int mid=(py1+l)/2;
			printf("%d %d\n",px1,mid);
			fflush(stdout);
			cin>>str;
			if(str=="CENTER")goto phere;
			else if(str=="HIT") py1=mid;
			else if(str=="WRONG")return 0;
			else l=mid+1;
		}
		//find the point to the left or right of the first point on the circle
		if(px==1000000000){//search left
			int l=-1000000000;
			while(l<px2){
				int mid=(px2+l)/2;
				printf("%d %d\n",mid,py2);
				fflush(stdout);
				cin>>str;
				if(str=="CENTER")goto phere;
				else if(str=="HIT") px2=mid;
				else if(str=="WRONG")return 0;
				else l=mid+1;
			}
		}else if(px==-1000000000){//search right
			int r=1000000000;
			while(px2<r){
				int mid=(px2+r)/2;
				printf("%d %d\n",mid,py2);
				fflush(stdout);
				cin>>str;
				if(str=="CENTER")goto phere;
				else if(str=="HIT") px2=mid;
				else if(str=="WRONG")return 0;
				else r=mid-1;
			}
		}
		else
		{
			printf("%d %d\n",px+1,py);
			fflush(stdout);
			cin>>str;
			if(str=="CENTER")goto phere;
			else if(str=="HIT") //the point is on the right
			{
				int r=1000000000;
				while(px2<r){
					int mid=(px2+r)/2;
					printf("%d %d\n",mid,py2);
					fflush(stdout);
					cin>>str;
					if(str=="CENTER")goto phere;
					else if(str=="HIT") px2=mid;
					else if(str=="WRONG")return 0;
					else r=mid-1;
				}
			}
			else if(str=="WRONG")return 0;
			else //the point is on the left
			{
				l=-1000000000;
				while(l<px2){
					int mid=(px2+l)/2;
					printf("%d %d\n",mid,py2);
					fflush(stdout);
					cin>>str;
					if(str=="CENTER")goto phere;
					else if(str=="HIT") px2=mid;
					else if(str=="WRONG")return 0;
					else l=mid+1;
				}
			}
		}
		int ansx;ansx=(px1+px2)/2;
		int ansy;ansy=(py1+py2)/2;
		printf("%d %d\n",px1,px2);
		fflush(stdout);
		cin>>str;
		if(str!="CENTER")return 0;
		phere:
			continue;
	}
	return 0;
} 
