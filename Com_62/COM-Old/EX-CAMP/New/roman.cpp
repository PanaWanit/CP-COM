#include<bits/stdc++.h>
using namespace std;
int i,x,v,c,l;
int main()
{
    int n;
    scanf("%d",&n);
    int j;
    for(j=1;j<=n;j++)
    {
        int q=j;
        while(q)
        {
            if(q>=100) c++,q-=100;
            else if(q>=90) c++,x++,q-=90;
            else if(q>=50) l++,q-=50;
            else if(q>=40) l++,x++,q-=40;
            else if(q>=10) x++,q-=10;
            else if(q>=9)  x++,i++,q-=9;
            else if(q>=5)   v++,q-=5;
            else if(q>=4)   i++,v++,q-=4;
            else            i++,q--;
         }
    }
    printf("%d %d %d %d %d",i,v,x,l,c);

    return 0;
}
