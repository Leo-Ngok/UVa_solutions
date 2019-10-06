#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    double hr,mn;
    char dot;
    while(true){
        cin>>hr>>dot>>mn;
        if(hr==0&&mn==0) break;
        hr=-hr*30-mn/2;
        mn*=-6;
        double res=abs(hr-mn);
        if(res>180) res=360-res;
        printf("%.3f\n",res);
    }
    return 0;
}
