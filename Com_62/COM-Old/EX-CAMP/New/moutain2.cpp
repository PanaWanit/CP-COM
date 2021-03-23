#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int var[2][100];
int main()
{
    int i,j,k,q,mxh=-2e9,mxl=-2e9;
    scanf("%d",&q);
    for(i=1; i<=q; i++)
    {
        scanf("%d %d",&var[0][i],&var[1][i]);
        if(var[1][i]>mxh)
            mxh=var[1][i];
        if(var[0][i]+var[1][i]*2-1>=mxl)
            mxl=var[0][i]+var[1][i]*2-1;
    }
        for(i=1; i<=mxh; i++)
            for(j=1; j<=mxl; j++)
                a[i][j]='.';

    for(k=1; k<=q; k++)
        for(i=1; i<=var[1][k]; i++)
        {

            for(j=1; j<=i*2; j++)
            {
                if(j==1)
                    if(a[i+(mxh-var[1][k])][(var[1][k]-i+j)+var[0][k]-1]=='X');
                    else if(a[i+mxh-var[1][k]][var[1][k]+var[0][k]-i+j-1]=='\\') a[i+mxh-var[1][k]][var[1][k]+var[0][k]-i+j-1]='v';
                    else a[i+mxh-var[1][k]][var[1][k]+var[0][k]-i+j-1]='/';

                else if(j==i*2)
                    if(a[i+mxh-var[1][k]][var[1][k]+var[0][k]-i+j-1]=='X');
                    else if(a[i+mxh-var[1][k]][var[1][k]+var[0][k]-i+j-1]=='/') a[i+mxh-var[1][k]][var[1][k]+var[0][k]-i+j-1]='v';
                    else a[i+mxh-var[1][k]][var[1][k]+var[0][k]-i+j-1]='\\';
                else
                    a[i+mxh-var[1][k]][var[1][k]+var[0][k]-i+j-1]='X';
            }
        }





    for(i=1; i<=mxh; i++)
    {
        for(j=1; j<=mxl; j++)
            printf("%c",a[i][j]);
        printf("\n");
    }


    return 0;
}
