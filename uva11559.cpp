#include <cstdio>
int main()
{
    long no_people,budget,hotels,weeks,lowest=2000001;
    while(scanf("%ld %ld %ld %ld",&no_people,&budget,&hotels,&weeks)!=EOF)
    {
        long hotelprice;
        for(int k=1;k<=hotels;k++)
        {
            scanf("%ld",&hotelprice);
            bool can=false;
            int no_beds;
            for(int i=1;i<=weeks;i++)
            {
                scanf("%d",&no_beds);
                if(no_beds>=no_people) can=true;
            }
             long total=no_people*hotelprice;
            if(can&&(total<lowest)) lowest=total;
        }
        if(lowest<=budget) printf("%d\n",lowest);
        else printf("stay home\n");
        lowest=2000001;
    }
    return 0;
}
