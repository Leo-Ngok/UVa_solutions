//p2785
#include <cstdio>
double coord[100010][2];
int main(){
	int n;double B;scanf("%d%lf",&n,&B);	
	for(int k=0;k<n;k++)
	scanf("%lf%lf",&coord[k][0],&coord[k][1]);
	coord[n][0]=coord[0][0];coord[n][1]=coord[0][1];
	double s=0;
	for(int k=0;k<n;k++)s+=coord[k][0]*coord[k+1][1]-coord[k+1][0]*coord[k][1];
	if(s<0)s=-s;s/=2;
	printf("%.4lf",s*B);return 0;
}
