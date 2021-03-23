/*
    TASK: Milk
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100],n;
int fr(int i){
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);

}
int main()
{
    int q,x,y,i;
    char opr;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        p[i]=i;
    }
    while(q--){


      scanf(" %c %d %d",&opr,&x,&y);
        if(opr=='c'){
            p[fr(x)]=fr(y);

        }
        else{
            if(fr(x)==fr(y)) printf("yes\n");
            else printf("no\n");
            //printf((fr(x)==fr(y))?"yes\n":"no\n");
        }
    }
    return 0;
}
