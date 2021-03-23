#include<bits/stdc++.h>
using namespace std;
struct mt{
    int h,l;
};
mt a[300];
char p[300][300];
int main()
{
    int mxh=-2e9,mxl=-2e9;
    int i,j,n,q;
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
        scanf("%d %d",&a[i].l,&a[i].h);
        int l=a[i].l+(2*a[i].h)-1;
        if(a[i].h>mxh) mxh=a[i].h;
        if(l>mxl) mxl=l;
    }
    for(i=1;i<=mxh;i++)
        for(j=1;j<=mxl;j++)
            p[i][j]='.';

    for(int k=1;k<=q;k++)
    {
        n=a[k].h;
        int l=a[k].l;
        int delH=mxh-a[k].h;

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i*2;j++)
            {
                int ii=i+delH;
                int jj=l+j+(n-i-1);
                if(j==1){
                    if(p[ii][jj]=='X');
                    else if(p[ii][jj]=='\\') p[ii][jj]='v';
                    else p[ii][jj]='/';
                }
                else if(j==i*2){
                    if(p[ii][jj]=='X');
                    else if(p[ii][jj]=='/') p[ii][jj]='v';
                    else p[ii][jj]='\\';

                }
                else{
                    p[ii][jj]='X';
                }

            }
        }

    }

    for(i=1;i<=mxh;i++)
    {
        for(j=1;j<=mxl;j++)
            printf("%c",p[i][j]);
        printf("\n");
    }
    return 0;
}
