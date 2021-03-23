/*
    TASK:   Ice Bucket
    AUTHOR: Pana
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int main()
{
    int q,g,k,cnt=0;
    scanf("%d",&q);

    while(q--)
    {
        cnt=0;
    scanf("%d %d",&g,&k);
    int n=1;
    while(n*100<g)
    {
        g-=10;
        n-=1;
        n+=k;
        cnt++;
    }



      printf("%d\n",cnt) ;

    }
    return 0;
}
