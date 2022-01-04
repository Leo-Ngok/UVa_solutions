#include <cstdio>
#define TL solvew(xm,ym,xl,yl,xm,ym);
#define TR solvew(xm+1,ym,xm+1,yl,xr,ym);
#define BL solvew(xm,ym+1,xl,ym+1,xm,yr);
#define BR solvew(xm+1,ym+1,xm+1,ym+1,xr,yr);
int n,x0,y0;
void solvew(int x,int y,int xl,int yl,int xr,int yr){
	if(yr-yl==1&&xr-xl==1){
		if(x==xl&&y==yl)printf("%d %d 1\n",xr,yr);
		else if(x==xl&&y==yr)printf("%d %d 2\n",xr,yl);
		else if(x==xr&&y==yr)printf("%d %d 4\n",xl,yl);
		else printf("%d %d 3\n",xl,yr);
	}else{	
		int xm=xl+(xr-xl+1)/2-1,ym=yl+(yr-yl+1)/2-1;
		if(x<=xm&&y<=ym){//top left
			solvew(x,y,xl,yl,xm,ym);
			printf("%d %d 1\n",xm+1,ym+1);
			TR
			BL
			BR
		}else if(x>xm&&y<=ym){//top right
			solvew(x,y,xm+1,yl,xr,ym);
			printf("%d %d 3\n",xm,ym+1);
			TL 
			BL
			BR
		}else if(x<=xm&&y>ym){//bottom left
			solvew(x,y,xl,ym+1,xm,yr);
			printf("%d %d 2\n",xm+1,ym);
			TL
			TR
			BR
		}else{//bottom right
			solvew(x,y,xm+1,ym+1,xr,yr);
			printf("%d %d 4\n",xm,ym);
			TL
			TR
			BL
		}
	}
}
int main(){
	scanf("%d%d%d",&n,&x0,&y0);
	n=1<<n;
	solvew(x0,y0,1,1,n,n);
	return 0;
}

