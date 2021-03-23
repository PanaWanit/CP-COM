#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n%2==0)
     {printf("error");
     return 0;
     }

    for(i=0;i<n/2+1;i++)
    {
        if(i>=1)
        {
            for(j=0;j<i;j++)
                printf(" ");
        }
        for(j=0;j<n-i*2;j++)
            printf("*");

        printf("\n");
    }
    for(i=0;i<n/2+1;i++)
    {
       if(i>=1)
       {
           if(i<n/2){
           for(j=0;j<n-(i+n/2)-1;j++)
                printf(" ");}
           for(j=0;j<i*2+1;j++)
            printf("*");
        printf("\n");
       }
    }
    return 0;
}
