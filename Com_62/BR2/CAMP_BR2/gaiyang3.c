#include<stdio.h>
#include<math.h>
int a[300][300];
int main()
{
    int n,i,j,k,l,o,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);


    for(i=0;i<n;i++){
        for(l=0;l<n;l++)
            for(z=0;z<n;z++)
                for(k=0;k<n;k++)
                    for(o=0;o<n;o++){
                        for(j=0;j<5;j++){
                            printf("%d ",a[(o+i+k++z+l)%3][j]);
                        }
                            printf("\n");

                    }

}
    return 0;
}
/*
3
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15



*/
