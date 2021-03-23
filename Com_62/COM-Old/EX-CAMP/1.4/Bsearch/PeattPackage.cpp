#include<bits/stdc++.h>
#define anum 1000000
using namespace std;
int mark[anum];
int w[anum],c[anum];
int main(){
    int l,r,mid,n,k,q,box,sum,i,counter,bcnt,mx=-2e9,ch=0;
    scanf("%d",&q);

   while(q--){
        ch=0;
        mx=-2e9;
        counter=1;

        scanf("%d %d",&n,&k);

        for(i=0;i<n;i++){
            scanf("%d %d",&w[i],&c[i]);
            mx=max(mx,w[i]);
        }

        l=mx;
        r=1e9;
        while(l<r){

            mid=(l+r)/2;
            for(i=0,box=1,sum=0;i<n;i++){
                    if(mark[c[i]]==counter||sum+w[i]>mid){
                        mark[c[i]]=counter+1;
                        box++,sum=w[i],counter++;
                    }
                    else
                        sum+=w[i],mark[c[i]]=counter;
            }

            if(box<=k) r=mid,ch=1;
            else l=mid+1;
            counter++;

        }
        if(!ch)
            printf("-1\n");
        else
            printf("%d\n",l);
        memset(mark,0,sizeof mark);
   }
    return 0;
}
/*
2
5 3
10 1
10 2
40 1
30 3
30 4
5 2
10 1
10 2
40 1
30 3
30 1


*/
/*
1 2
10 1
*/
