/*
    TASK:   arrayprac
    AUTHOR: Pana
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int a[10011],cnt=0;
int main()
{
    int n,k;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
        if(a[i]==k)cnt++;}
    printf("\n%d",cnt);

    return 0;
}
