//p1598
#include <cstdio>
using namespace std;
const int WORDLEN = 100;
int anum[26];
int main(){
	char words[WORDLEN]; 
	for(int g=0;g<4;g++){		
		gets(words);
		for(int k=0;k<WORDLEN;k++){		
			if(words[k]=='\0') break;
			if(words[k]>='A'&&words[k]<='Z')anum[words[k]-'A']++;		
		}
	}
	int max=0;
	for(int q=0;q<26;q++)if(max<anum[q])max=anum[q];	
	for(int j=max;j>=1;j--){
		char starlist[26];
		for(int r=0;r<26;r++) if(anum[r]>=j) printf("* "); else printf("  ");
		printf("\n");
	}
	for(int a=0;a<=25;a++)printf("%c ",a+'A');
	return 0;
}
