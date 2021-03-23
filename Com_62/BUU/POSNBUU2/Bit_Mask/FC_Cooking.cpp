/*
    TASK: FC_Cooking
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int s[11],sw[11];
int main(){
    int n,i,j,mn=2e9;
    cin >> n;
    for(i=0;i<n;i++) cin >> sw[i] >> s[i];
    for(i=1;i< (1<<n) ;i++){
        int A=0,B=1;
        for(j=0;j<n;j++){
            if( i & (1<<j) ){
                A+=s[j];
                B*=sw[j];
            }
        }
        mn = min(mn,abs(A-B));
    }
    cout << mn <<endl;
    return 0;
}
/*
4
1 7
2 6
3 8
4 9
*/
