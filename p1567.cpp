#include <cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int yt=0;
	int temp;
	int contdays=0;
	int pcontdays=0;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		if(temp>=yt){
			contdays++;
			
		}else{
			if(contdays>pcontdays){
				pcontdays=contdays;
								
			}
			contdays=1;
			
		}
		yt=temp;
	}
	printf("%d",pcontdays);
	return 0;
}
