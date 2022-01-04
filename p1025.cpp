//p1025
#include <cstdio>
int m, arr[103];  
long long cnt=0;
void dfs(int n, int i, int a) {
  if (n == 0&&i!=m){
  	//printf("%d",arr[1]);
    //for (int j = 2; j <= i - 1; ++j) printf("+%d",arr[j]);
    //printf("\n");
    cnt++;
  }
  if (i < m){
    for(int j = a; j <= n; ++j){
      arr[i] = j;dfs(n - j, i + 1, j);
    }
  }
}
int n;
int main(){
	scanf("%d%d", &n,&m);
	m++;
	dfs(n, 1, 1);
	printf("%lld",cnt);
}
