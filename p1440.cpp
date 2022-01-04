//segment tree
#include <cstdio>
#include <vector>
using namespace std;
typedef vector<int> vi;
class SegmentTree{
	private: 
		vi st, A;
		int n;
		int left(int p){return p<<1;}
		int right(int p){return (p<<1)+1;}
		void build(int p,int L,int R){
			if(L==R)st[p]=L;
			else {
				//find the values recursively
				build(left(p),L,(L+R)/2);
				build(right(p),(L+R)/2+1,R);
				int p1=st[left(p)],p2=st[right(p)];
				st[p]=(A[p1]<=A[p2])?p1:p2;
			}
		}
		int rmq(int p,int L,int R,int i,int j){
			if(i>R||j<L)return -1;//outside range
			if(L>=i&&R<=j)return st[p];//inside range
			//find the min position in left and right sub-tree
			int p1=rmq(left(p),L,(L+R)/2,i,j);
			int p2=rmq(right(p),(L+R)/2+1,R,i,j);
			if(p1==-1)return p2;if(p2==-1)return p1;//when outside range
			return (A[p1]<=A[p2])?p1:p2;	
		}
	public:
		SegmentTree(const vi &_A){
			A=_A;n=(int)A.size();
			st.assign(n*4,0);
			build(1,0,n-1);
		}
		int rmq(int i,int j){return rmq(1,0,n-1,i,j);}
};
int arr[2000010];
int main(){
	int n,m;scanf("%d %d",&n,&m);
	for(int k=0;k<n;k++)scanf("%d",arr+k);
	vi A(arr,arr+n);
	SegmentTree st(A);
	for(int k=0;k<n;k++){
		if(k==0)printf("0\n");
		else if(k<=m)printf("%d\n",st.rmq(1,k));
		else printf("%d\n",st.rmq(k-m,k)); 
	}
	return 0;
}
