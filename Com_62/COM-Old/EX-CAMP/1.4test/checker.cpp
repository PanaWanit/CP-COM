/*
    TASK:
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100];
int fr(int i){
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);

}
int main()
{
    int m,n,q,x,y,i;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        p[i]=i;
    }
    for(i=1;i<=m;i++){
        scanf("%d %d",&x,&y);
        int px=fr(x);
        int py=fr(y);
        p[px]=py;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&x,&y);

            if(fr(x)==fr(y)) printf("Yes\n");
            else printf("No\n");
            //printf((fr(x)==fr(y))?"yes\n":"no\n");

    }
    return 0;
}
/*
5 4
3 5
3 4
2 5
3 2
3
1 5
2 4
2 1
*/
