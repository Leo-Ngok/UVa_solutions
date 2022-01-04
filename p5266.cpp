//p5266
#include<iostream>
#include<cstring>
#include<map>
using namespace std;
map <string,int> person;
int n,op,mrk;
string name;
int main(){
    cin>>n;
    while(n--){
        cin>>op;
        if(op!=4)cin>>name;
        switch(op){  
            case 1: 
			cin>>mrk;
            person[name]=mrk;cout<<"OK\n";break; 
            case 2:
            if(person.count(name))cout<<person[name]<<endl; 
            else cout<<"Not found\n";break;
            case 3:
            if(person.count(name)){person.erase(name);cout<<"Deleted successfully\n";}
            else cout<<"Not found\n";break;
            case 4:
            cout<<person.size()<<endl;break;
        }
    }
    return 0;
}
