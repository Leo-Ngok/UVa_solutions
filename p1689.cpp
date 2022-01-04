//p1689
#include <cstring>
#include <iostream>
#include <complex>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
double dabs(double x){
	return (x<0)?-x:x;
}
string& trim(string &s) 
{
    if (s.empty()) return s;
    s.erase(0,s.find_first_not_of(" "));
    s.erase(s.find_last_not_of(" ") + 1);
    return s;
}
int main(){
	string s;
	getline(cin,s);
	int n=s.size();
	trim(s);
	//cout<<s<<endl;
	char x='?';
	complex<int> sum (0,0);
	complex<int> temp (0,0);
	bool islhs=false;
	bool isunknown=false;
	int mi=1;
	for(int l=n-1;l>=0;l--){
		if(s[l]>='0'&&s[l]<='9'){													
			if(!isunknown){
				real(temp)+=(s[l]-'0')*mi;
				mi*=10; 
			}
			else{
				 imag(temp)+=(s[l]-'0')*mi;
				 mi*=10;
			}
			if(l==0){
				sum+=temp;
			}
		}
		if(s[l]==x){
			isunknown=true;
			if(l==0) sum.imag()++;
		}
		if(s[l]=='+'){
			isunknown=false;
			if(s[l+1]==x){
				if(!islhs){
					imag(sum)--;
				}else{
					imag(sum)++; 
			}
			}else{
				if(!islhs){
					sum-=temp;
				}else{
					sum+=temp; 
				}
			}			
			mi=1;
			real(temp)=0;
			imag(temp)=0;
		}
		if(s[l]=='-'){
			isunknown=false;
			if(s[l+1]==x){
				if(!islhs){
					imag(sum)++;
				}else{
					imag(sum)--;
				} 
			}
			else{
				if(!islhs){
					sum+=temp;
				}else{
					sum-=temp; 
				}
			}
			mi=1;
			real(temp)=0;
			imag(temp)=0;
		}
		if(s[l]=='=') {
			islhs=true;
			if(s[l+1]==x){
				isunknown=false;
				imag(sum)--;
				mi=1;
				real(temp)=0;
				imag(temp)=0;
			}
			if(s[l+1]!='+'&&s[l+1]!='-'){
				isunknown=false;
				sum-=temp;
				mi=1;
				real(temp)=0;
				imag(temp)=0;
			}
		}
		
	}
	double result=-real(sum)*1.0/imag(sum);
	if(dabs(result)<1e-4)result=0;
	printf("%.0f\n",result);
	return 0;
}
