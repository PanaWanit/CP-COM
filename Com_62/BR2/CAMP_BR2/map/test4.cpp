#include<bits/stdc++.h>
using namespace std;

struct A{
    int x,y,z;
    bool operator<(const A&o)const{
        if(x!=o.x) return x<o.x;
        if(y!=o.y) return y>o.y;
        if(z!=o.z) return z<o.z;

    }

};
A b[3030];
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %d %d",&b[i].x,&b[i].y,&b[i].z);
    sort(b,b+n);
    for(i=0;i<n;i++)
        printf("%d %d %d\n",b[i].x,b[i].y,b[i].z);




    return 0;
}
/*
6
4 2 7
3 6 9
4 2 1
3 8 7
4 3 6
4 3 9

*/
