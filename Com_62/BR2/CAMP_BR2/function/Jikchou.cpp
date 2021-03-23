#include<bits/stdc++.h>
int A,B,C;
using namespace std;
int mark[30][30][30],ans[90];

void gaiyang(int a,int b,int c)
{
    if(a<0||a>A||b<0||b>B||c<0||c>C)  return;
    if(mark[a][b][c]) return;
    mark[a][b][c]=1;
    if(a==0)
        ans[c]=1;
        //A-->B
    gaiyang(0,a+b,c); gaiyang(a-(B-b),B,c);
        //A-->C
    gaiyang(0,b,c+a);  gaiyang(a-(C-c),b,C);
        //B-->A
    gaiyang(a+b,0,c); gaiyang(A,b-(A-a),c);
        //B-->C
    gaiyang(a,0,b+c);  gaiyang(a,b-(C-c),C);
        //C-->A
    gaiyang(a+c,b,0); gaiyang(A,b,c-(A-a));
        //C-->B
    gaiyang(a,b+c,0); gaiyang(a,B, c-(B-b));
}
int main()

{
    int i;
    scanf("%d %d %d",&A,&B,&C);
    gaiyang(0,0,C);

    for(i=0;i<=C;i++)
        if(ans[i])
            printf("%d ",i);



    return 0;
}
