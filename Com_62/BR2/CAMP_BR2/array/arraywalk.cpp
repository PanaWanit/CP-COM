/*
    TASK:   arraywalk
    AUTHOR: Pana
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int a[100][100];
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            printf("%d ",a[i][j]);
    printf("\n");
    for(i=n-1;i>=0;i--)
        for(j=m-1;j>=0;j--)
            printf("%d ",a[i][j]);
    printf("\n");

for(j=0;j<m;j++)
    for(i=0;i<n;i++)
          printf("%d ",a[i][j]);

    printf("\n");

for(j=m-1;j>=0;j--)
    for(i=n-1;i>=0;i--)
          printf("%d ",a[i][j]);

    printf("\n");
    return 0;
}
/*
3 5 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

*/
