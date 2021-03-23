#include<bits/stdc++.h>
using namespace std;
int ar[250000],hr[250000],mr[250000],ml[250000],al[250000],hl[250000];
int main(){
    int n;
    int mx,cnt,k,del,st=1,ans;
    int r=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        scanf("%d %d",&ar[i],&hr[i]);
        al[i]=ar[i];
        hl[i]=hr[i];
    }

    st=1;
    cnt=1;
    mr[1]=1;
    ans=1;
    mx=1;
    for(i=1;i<=n-1;i++){
        k=ar[i+1]-ar[i];
        del=hr[i]-k;
        if(del>0){
            mr[i+1]=st;
            cnt++;
            if(cnt>mx){
              mx=cnt;
              ans=mr[i+1];
              r=1;
            }
            if(del>hr[i+1]) hr[i+1]=del;

        }
        else {
          st=i+1;
          mr[i+1]=st;
          cnt=1;
        }
    }

    ml[n]=n;
    st=n;
    cnt=1;

    for(i=n;i>=2;i--){
        k=al[i]-al[i-1];
        del=hl[i]-k;
        if(del>0){
            ml[i-1]=st;
            cnt++;
            if(cnt>mx){
                mx=cnt;
                ans=ml[i-1];
                r=0;
            }
            else if(cnt==mx){
                if(ans>ml[i-1]) ans=ml[i-1],r=0;
                else if(ans==ml[i-1]) r=0;
            }
            if(del>hl[i-1]) hl[i-1]=del;
        }
        else {
            st=i-1;
            ml[i-1]=st;
            cnt=1;
        }
    }
    printf("%d ",ans);
    printf((r)?"R":"L");

    return 0;
}
/*
5
1 1
3 3
5 4
7 15
10 3

5
1 4
3 3
5 4
7 15
10 3

6
1 3
2 1
4 2
7 6
8 3
10 1

11
1 1
2 1
3 1
4 2
5 1
15 1
16 1
17 1
18 1
19 1
20 2

8
1 1
2 2
3 5
4 60
8 51
50 1
52 53
54 55

5
1 1
2 2
3 3
10 10
50 50
*/


