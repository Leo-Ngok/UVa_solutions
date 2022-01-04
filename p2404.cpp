//p2404
#include <cstdio>
int m, arr[103];  
void dfs(int n, int i, int a) {
  if (n == 0&&i!=2){
  	printf("%d",arr[1]);
    for (int j = 2; j <= i - 1; ++j) printf("+%d",arr[j]);
    printf("\n");
  }
  if (i < m){
    for(int j = a; j <= n; ++j){
      arr[i] = j;dfs(n - j, i + 1, j);
    }
  }
}
int n;
int main(){
	scanf("%d", &n);
	m=n;
	printf("1");
	for(int i=2;i<=n;i++)printf("+1");
	printf("\n");
	dfs(n, 1, 1);
}
