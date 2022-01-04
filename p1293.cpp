//p1293
#include<string>
#include <iostream>
using namespace std;
long long k=1,minn=10000000,m;
struct city{
    long long s,j,cost;
    string n;
};
city  p[10005];
long long abs(long long n){
	return(n>=0)?n:-n;
}
int main()
{
    while(cin>>p[k].s>>p[k].j>>p[k].n)k++;
    for(int i=1;i<k;i++){
        for(int g=1;g<k;g++)p[i].cost+=abs(p[i].j-p[g].j)*p[g].s;
        if(p[i].cost<=minn){
            minn=p[i].cost;m=i;
        }
    }
    cout<<p[m].n<<" "<<p[m].cost<<endl;
    return 0;
} 
