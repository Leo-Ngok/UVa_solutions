#include <cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int yt=0;
	int temp=0;
	int contdays=0;
	int pcontdays=0;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		if(temp>yt){
			contdays++;
		}else{
			if(contdays>pcontdays){
				pcontdays=contdays;
								
			}
			
			contdays=0;
			
		}
		//if(contdays!=1)pcontdays=contdays;
		yt=temp;
	}
	printf("%d",pcontdays+1);
	return 0;
}
