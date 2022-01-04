//p1597
#include <cstdio>
#include <cstring>
char syn[300],var;
int a=0,b=0,c=0,n;
int proc(char w)
{
	if(w>='0'&&w<='9')return w-'0';
	else if(w=='a')return a;
	else if(w=='b')return b;
	else return c;
}
int main()
{
	scanf("%s",syn);
	n=strlen(syn);
	for(int i=0;i<n;i+=5)
	{
		var=syn[i];
		switch(var)
		{
			case 'a':a=proc(syn[i+3]);break;
			case 'b':b=proc(syn[i+3]);break;
			case 'c':c=proc(syn[i+3]);break;		
		}
	}
	printf("%d %d %d",a,b,c);return 0;
}
