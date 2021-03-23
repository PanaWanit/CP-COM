#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    switch(n)
    {
        case 0: printf("Zero\n");break;
        case 1: printf("One\n");break;
        default: printf("Other\n");
    }
    for(i=1;i<=m;i++)
        printf("%d ",i);
    printf("\n");
    int k=m;
    while(k--)
        printf("%d ",m-k);
    printf("\n");
    i=1;
    do
    {
        printf("%d ",i);
    }while(i++<m);


    return 0;
}
