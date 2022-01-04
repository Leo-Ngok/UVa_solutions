//p1030
#include <string>
#include <iostream>
using namespace std;
string inorder,postorder;
struct node{
	char data;
	node *left,*right;
	node():left(0),right(0){}
}*tr=new node();
void construct(node *vtx,string poo,string ino){
	char chr=poo[poo.size()-1];
	vtx->data=chr;
	if(poo.size()==1)return;
	int k;
	for(int i=0;i<ino.size();i++)if(chr==ino[i]){k=i;break;}
	if(k>0){
		vtx->left=new node();
		construct(vtx->left,poo.substr(0,k),ino.substr(0,k));
	}
	if(poo.size()>k+1){
		vtx->right=new node();
		construct(vtx->right,poo.substr(k,poo.size()-k-1),ino.substr(k+1,poo.size()-k-1));
	}	
}
void dfs(node *vtx){
	if(vtx==NULL)return;
	cout<<vtx->data;
	dfs(vtx->left);
	dfs(vtx->right);
}
int main(){
	cin>>inorder>>postorder;
	construct(tr,postorder,inorder);
	dfs(tr);
	return 0;
}
