#include <cstdio>
using namespace std;
int main()
{
    int a,b;
    int k;
    scanf("%d",&k);
    while(k--){
        scanf("%d %d",&a,&b);
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else printf("=\n");
    }
    return 0;
}