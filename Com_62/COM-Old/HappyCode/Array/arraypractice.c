#include<stdio.h>
int a[1100];
int main()
{
    int i,n,m,cnt=0;
    scanf("%d",&m);

    for(i=0;i<m;i++)
        scanf("%d",&a[i]);

        scanf("%d",&n);
    for(i=m-1;i>=0;i--){
        printf("%d ",a[i]);

        if(a[i]==n) cnt++;

    }
    printf("\n");
    printf("%d",cnt);
    return 0;
}
