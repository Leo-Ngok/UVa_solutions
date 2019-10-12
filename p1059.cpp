//p1059
//merge sort
#include <cstdio>
void swap(int &a, int &b){
	int t=a;
	a=b;
	b=t;
}
//sorting range is: [start,end]
void merge(int *arr,int start,int mean,int end){
	//質佢係新陣列
	int ls=mean-start+1;
	//事實上是end-(mean+1)+1; 
	int rs=end-mean;
	
	int left[ls], right[rs];
	//質d數落去臨時數列 
	for(int i=0;i<ls;i++)left[i]=arr[start+i];
	for(int j=0;j<rs;j++)right[j]=arr[mean+1+j];
	int i=0,j=0,k=start;
	//開始質數 
	for(;i<ls&&j<rs;k++){
		if(left[i]<=right[j]){
			arr[k]=left[i];
			i++;
		}else{
			arr[k]=right[j];
			j++;
		}
	}
	//質埋剩低哥d 
	for(;i<ls;i++){
		arr[k]=left[i];
		k++;
	}
	for(;j<rs;j++){
		arr[k]=right[j];
		k++;
	}
}
void msort(int *arr,int start,int end){
	int mean=start+(end-start)/2;
	if(start<end) {
		msort(arr,start,mean);
		msort(arr,mean+1,end);
		merge(arr,start,mean,end);		
	}
}
int main(){
	int count;
	scanf("%d",&count);
	int lis[count];
	for(int t=0;t<count;t++)scanf("%d",&lis[t]);
	
	msort(lis,0,count-1);
	int prev=-1;
	int duplicate=0;
	for(int f=0;f<count;f++){		
		if(lis[f]==prev)continue;
		duplicate++;
		prev=lis[f];
	}
	printf("%d\n",duplicate);
	prev=-1;
	for(int k=0;k<count;k++){
		if(lis[k]==prev)continue;
		printf("%d ",lis[k]);
		prev=lis[k];
	}
	return 0;
}
