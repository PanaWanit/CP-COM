/*
    TASK: Perket
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[15],b[15],ans=2e9,n,cc=0;
int ch[15];
void permu(int state){
    int i;
    if(state == n){
        if(!cc) {
            cc=1;
            return;
        }
        int A=1,B=0;
        for(i=0;i<n;i++){
            if(ch[i]){
                cc=1;
                A*=a[i];
                B+=b[i];
            }
        }
        ans = min(ans,abs(A-B));
        return ;
    }
    ch[state]=0;
    permu(state+1);
    ch[state]=1;
    permu(state+1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i;
    cin >> n;
    for(i=0;i<n;i++) cin >> a[i] >> b[i];
    permu(0);
    cout << ans;
    return 0;
}
