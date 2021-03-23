/*
    TASK: wordchain
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int len,i,q,cnt,ch=0;
    string a,b,ans;
    cin >> len >> q;
    cin >> a;
    while(--q){
        cin >> b;
        for(i=0,cnt=0;i<len;i++){
            if(a[i]!=b[i]) cnt++;
        }
        if(cnt > 2 && ch==0){
            ans = a;
            ch=1;
        }
        a = b;
    }
    if(ch==0) ans = a;
    cout << ans;
    return 0;
}
/*
4
5
HEAD
HEAP
LEAP
TEAR
REAR
*/
