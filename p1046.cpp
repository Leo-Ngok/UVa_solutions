#include <cstdio>
int apples[10];
int main(){
	for(int j=0;j<10;++j) scanf("%d",&apples[j]);
	int h;
	scanf("%d",&h);
	h+=30;
	int c=0;
	for(int k=0;k<10;k++){
		if(h>=apples[k])c++;
	}
	printf("%d",c);
	return 0;
}
