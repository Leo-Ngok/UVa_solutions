//p1036 
#include <iostream>
#include <math.h>
using namespace std;
int x[20],n,k;
bool isprime(int n){
    int s=sqrt(n);
    for (int k=2;k<=s;k++){
        if(n%k==0) return false;
    }
    return true;
}
int rule(int ln,int t,int start,int end){
    if(ln==0)return isprime(t);
    int sum=0;
    for(int i=start;i<=end;i++)sum+=rule(ln-1,t+x[i],i+1,end);
    return sum;
}
int main(){
    cin>>n>>k;
    for(int j=0;j<n;j++)cin>>x[j];
    cout<<rule(k,0,0,n-1);
}
