//p1981
#include <iostream>
#include <stack>
using namespace std;
stack <int> x;
int main()
{
    int a,b;char c;
    cin>>a;
    int m=10000;
    a%=m;x.push(a);
    while(cin>>c>>b){
        if(c=='*'){
            a=x.top();x.pop();
            x.push(a*b%m);
        }
        else x.push(b);
    }
    a=0;
    while(x.size()){a+=x.top();x.pop();a%=m;}
    cout<<a<<endl;
    return 0;
}
