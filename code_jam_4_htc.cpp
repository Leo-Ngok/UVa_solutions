#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <set>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long ll;

int att[102], b;
int axa[102]; //a[i] xor a[b-i]

int query(int x){
    int ans;
    printf("%d\n", x);
    fflush(stdout);
    scanf(" %d", &ans);
    return ans;
}

int findblock(int x){ //5*x - 4 to 5*x, 1 rev 2 flip 3 fliprev, uses 2 queries
    int block[11];
    for(int i = 1; i <= 5; i++){
        block[i] = att[5*(x-1)+i];
        block[11 - i] = att[b + 1 - 5*(x-1) - i];
    }
    
    int sameid = 0, diffid = 0, ttldiff = 1, ttlsame = 1;
    for(int i = 1; i <= 5; i++){
        if(axa[5*(x-1)+i] == 0){
            sameid = 5*(x-1)+i;
        }
        else{
            diffid = 5*(x-1)+i;
        }
    }
    if(sameid == 0){
        ttldiff = 1;
        sameid = diffid;
    }
    if(diffid == 0){
        ttlsame = 1;
        diffid = sameid;
    }
    int qsame = query(sameid);
    int qdiff = query(diffid);
    if(qsame == att[sameid] && qdiff == att[diffid]){
        return 0;
    }
    else if(qsame == att[sameid] && qdiff != att[diffid]){
        return 1;
    }
    else if(qsame != att[sameid] && qdiff != att[diffid]){
        return 2;
    }
    else {
        return 3;
    }
}

int main(){
    int casettl;
    scanf(" %d %d", &casettl, &b);
    
    for(int caseno = 1; caseno <= casettl; caseno++){
        int can[102]; //canonical string

        int qsame, qdiff;
        int sameid, diffid;
        int ttlsame = 0, ttldiff = 0;
        for(int i = 1; i <= b; i++){
            can[i] = -1;
        }
        sameid = 0;
        diffid = 0;
        for(int i = 1; i <= b/2; i++){ //100 queries
            att[i] = query(i);
            att[b + 1 - i] = query(b + 1 - i);
            if(att[i] == att[b + 1 - i]){
                axa[i] = 0;
                axa[b + 1 - i] = 0;
                if(sameid == 0){
                    sameid = i;
                }
            }
            else{
                axa[i] = 1;
                axa[b + 1 - i] = 1;
                if(diffid == 0){
                    diffid = i;
                }
            }
        }
        if(sameid == 0){
            ttldiff = 1;
            sameid = diffid;
        }
        if(diffid == 0){
            ttlsame = 1;
            diffid = sameid;
        }
        
        //string now is canonical
        
        int fin = 0;
        int state;

        int doneblk[11];
        for(int x = 1; x <= 10; x++){
            doneblk[x] = -1;
        }
        for(int i = 0; ;i++){ //10 each, ttl 20 queries
            qsame = query(sameid);
            qdiff = query(diffid);
            

        
            if(i == 0){
                can[sameid] = qsame;
                can[diffid] = qdiff;
                if(ttldiff == 0){
                    can[b + 1 - sameid] = can[sameid];
                }
                if(ttlsame == 0){
                    can[b + 1 - diffid] = 1 - can[diffid];
                }
            }
            
            
            if(qsame == can[sameid] && qdiff == can[diffid]){
                state = 0;
            }
            else if(qsame == can[sameid] && qdiff != can[diffid]){
                state = 1; //rev
            }
            else if(qsame != can[sameid] && qdiff != can[diffid]){
                state = 2; // flip
            }
            else {
                state = 3; // fliprev
            }
            
            for(int j = 0; j < 4; j++){
                int nxt = 1;
                while(nxt <= b/10 && doneblk[nxt] != -1){
                    nxt++;
                }
                if(nxt == b/10 + 1){
                    fin = 1;
                    findblock(1);
                }
                if(nxt <= b/10){
                    doneblk[nxt] = 1;
                    int fb = findblock(nxt);
                    if((fb ^ state) == 0){
                        for(int i = 1; i <= 5; i++){
                            can[5*(nxt-1)+i] = att[5*(nxt-1)+i];
                            can[b + 1 - 5*(nxt-1) - i] = att[b + 1 - 5*(nxt-1) - i];
                        }
                    }
                    if((fb ^ state) == 1){
                        for(int i = 1; i <= 5; i++){
                            can[5*(nxt-1)+i] = att[b + 1 - 5*(nxt-1) - i];
                            can[b + 1 - 5*(nxt-1) - i] = att[5*(nxt-1)+i];
                        }
                    }
                    if((fb ^ state) == 2){
                        for(int i = 1; i <= 5; i++){
                            can[5*(nxt-1)+i] = 1- att[5*(nxt-1)+i];
                            can[b + 1 - 5*(nxt-1) - i] = 1- att[b + 1 - 5*(nxt-1) - i];
                        }
                    }
                    if((fb ^ state) == 3){
                        for(int i = 1; i <= 5; i++){
                            can[5*(nxt-1)+i] = 1 - att[b + 1 - 5*(nxt-1) - i];
                            can[b + 1 - 5*(nxt-1) - i] = 1 - att[5*(nxt-1)+i];
                        }
                    }
                }
            }
            
            if(fin == 1){
                break;
            }
        }
        
        //output 2 queries
        qsame = query(sameid);
        qdiff = query(diffid);
        if(qsame == can[sameid] && qdiff == can[diffid]){
            for(int i = 1; i <= b; i++){
                printf("%d", can[i]);
            }
        }
        else if(qsame == can[sameid] && qdiff != can[diffid]){
            for(int i = 1; i <= b; i++){
                printf("%d", can[b + 1 - i]);
            }
        }
        else if(qsame != can[sameid] && qdiff != can[diffid]){
            for(int i = 1; i <= b; i++){
                printf("%d", 1 - can[i]);
            }
        }
        else {
            for(int i = 1; i <= b; i++){
                printf("%d", 1 - can[b + 1 - i]);
            }
        }
        printf("\n");
        fflush(stdout);
        char verdict;
        scanf(" %c", &verdict);
        if(verdict == 'N'){
            return 0;
        }
    }
}

