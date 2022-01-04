//p1087
#include <cstdio>
char arr[1030];
struct node{
	char data;
	node *left=NULL,*right=NULL;
	node(): left(0),right(0){}
}*root=new node();
int n;
void maketree(node *vtx,int l,int r){
	if(r-l==1){
		vtx->data=(arr[l]=='1')?'I':'B';
		return;
	}
	vtx->left=new node(),vtx->right=new node();
	maketree(vtx->left,l,(l+r)/2);
	maketree(vtx->right,(l+r)/2,r);
	if(vtx->left->data!=vtx->right->data)vtx->data='F';
	else vtx->data=vtx->left->data;
}
void post_order(node *vtx){
	if(vtx==NULL)return;
	post_order(vtx->left);
	post_order(vtx->right);
	printf("%c",vtx->data);
}
int main(){
	scanf("%d",&n);
	n=1<<n;
	scanf("%s",arr);
	maketree(root,0,n);
	post_order(root);
	return 0;
} 

