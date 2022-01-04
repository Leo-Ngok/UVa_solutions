//p1827
#include <string>
#include <iostream>
using namespace std;
string inorder,preorder;
struct node{
	char data;
	node *left,*right;
	node():left(0),right(0){}
}*tr=new node();
void construct(node *vtx,string pro,string ino){
	char chr=pro[0];
	vtx->data=chr;
	if(pro.size()==1)return;
	int k;
	for(int i=0;i<ino.size();i++)if(chr==ino[i]){k=i;break;}
	if(k>0){
		vtx->left=new node();
		construct(vtx->left,pro.substr(1,k),ino.substr(0,k));
	}
	if(pro.size()>k+1){
		vtx->right=new node();
		construct(vtx->right,pro.substr(k+1,pro.size()-k-1),ino.substr(k+1,pro.size()-k-1));
	}	
}
void dfs(node *vtx){
	if(vtx==NULL)return;
	dfs(vtx->left);
	dfs(vtx->right);
	cout<<vtx->data;
}
int main(){
	cin>>inorder>>preorder;
	construct(tr,preorder,inorder);
	dfs(tr);
	return 0;
}
