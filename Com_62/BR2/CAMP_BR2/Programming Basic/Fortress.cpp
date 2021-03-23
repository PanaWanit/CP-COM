/*
    TASK:   61_Fortress
    AUTHOR: Pana
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int main()
{
    int n,m,b,k=20;
    while(k--){
    scanf("%d %d",&m,&n);
    b=(m/2)-n;
    if(b<=n&&b>=0)
    printf("%d\n",n-b+1);
    else printf("0\n");

    }
    return 0;
}
/*
40 15
30 12
60 40
50 18
66 26
36 11
36 16
36 18
56 20
56 22
44 18
32 14
42 20
36 16
38 14
38 16
34 20
36 16
44 14
34 14

*/
