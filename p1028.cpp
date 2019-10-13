#include<iostream>
using namespace std;
int n;
int f[1001];
int main(){
    //cin>>n;
    
	n=100;
    for(int i=1;i<=n;i++){ 
        for(int j=1;j<=i/2;j++)
            f[i]+=f[j];
        f[i]++; 
    }
    for(int n=0;n<100;n+=2){
    	cout<<"f("<<n<<")="<<f[n]<<endl;
	}
    
	
    return 0;
}
