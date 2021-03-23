#include<bits/stdc++.h>
using namespace std;
int a[250000],b[250000],ar[250000],br[250000],mr[250000],ml[250000],al[250000],bl[250000];
int main(){
    int n;
    int mx,cnt,posmx=0,k,del,st=1,ans;
    int r=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        scanf("%d %d",&a[i],&b[i]);
        ar[i]=a[i];
        br[i]=b[i];
        al[i]=a[i];
        bl[i]=b[i];
    }

    st=1;
    cnt=1;
    mr[1]=1;
    ans=1;
    mx=1;
    for(i=1;i<n;i++){
        k=ar[i+1]-ar[i];
        del=br[i]-k;
        if(k<br[i]){
            mr[i+1]=st;
            cnt++;
            if(cnt>mx){
                mx=cnt;
                ans=mr[i+1];
                r=1;
            }
            if(del>br[i+1]) br[i+1]=del;

        }
        else {
            st=i+1;
            mr[i+1]=st;
            cnt=1;
            if(cnt>mx){
                mx=cnt;
                ans=mr[i+1];
                r=1;
            }
        }
    }

    ml[n]=n;
    st=n;
    cnt=1;

    for(i=n;i>1;i--){
        k=al[i]-al[i-1];
        del=bl[i]-k;
        if(k<bl[i]){
            ml[i-1]=st;
            cnt++;
            if(cnt>mx){
                mx=cnt;
                ans=ml[i-1];
                r=0;
            }
            else if(cnt==mx){
                if(ans>ml[i-1]){
                    ans=ml[i-1];
                    r=0;
                }
                else if(ans==ml[i-1]){
                    r=0;
                }
            }
            if(del>bl[i-1]) bl[i-1]=del;
        }
        else {
            st=i-1;
            ml[i-1]=st;
            cnt=1;
            if(cnt>mx){
                mx=cnt;
                ans=ml[i-1];
                r=0;
            }
        }
    }
    if(r) printf("%d R",ans);
    else printf("%d L",ans);
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


