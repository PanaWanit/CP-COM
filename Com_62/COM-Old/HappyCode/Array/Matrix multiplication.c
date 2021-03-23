#include<stdio.h>
int a[1100][1100],b[1100][1100],c[1100][1100];
int main()
{
    int n1,m1,m2,n2,j,i;
    scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
    if(m1==n2)
    {
        for(i=0;i<n1;i++)
            for(j=0;j<m1;j++)
            scanf("%d",&a[i][j]);

         for(i=0;i<n2;i++)
            for(j=0;j<m2;j++)
            scanf("%d",&b[i][j]);

        for(i=0;i<n1;i++)
            for(j=0;j<m2;j++)
                for(int k=0;k<m1;k++)
                c[i][j]+=a[i][k]*b[k][j];

           for(i=0;i<n1;i++){

            for(j=0;j<m2;j++)
                printf("%d ",c[i][j]);

            printf("\n");
           }
    }

    else
        printf("Can't Multiply.");

}
/*
2 3 3 2
4 5 -2
3 -4 1
-1 2
-5 -3
3 -6

*/
