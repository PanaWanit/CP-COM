/*
    TASK: Matrix Multiplication
    AUTHOR: Pana
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int a[2000][2000],b[2000][2000],c[2000][2000];
int main()
{
    int n1,m1,m2,n2,j,i,k;
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
                for(k=0;k<m1;k++)
                c[i][j]+=a[i][k]*b[k][j];

        for(i=0;i<n1;i++){
            for(j=0;j<m2;j++)
                printf("%d ",c[i][j]);
            printf("\n");}
    }
    else
        printf("Can't Multiply.");

    return 0;
}

/*
2 3 3 2
4 5 -2
3 -4 1
-1 2
-5 -3
3 -6



*/
