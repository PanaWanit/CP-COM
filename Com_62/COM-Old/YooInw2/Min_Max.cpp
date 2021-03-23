/*
    TASK: Min Max
    AUTHOR: YooInw2
    LANG: CPP
    SCHOOL: Yoo Noober channel School at Home
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int mn,mx,n,k;
    cin >> n;
    n-=1;
    cin >> mn;
    mx=mn;
    while(n--){
        cin >> k;
        mx = max(k,mx);
        mn = min(k,mn);
    }
    cout << mn << endl << mx << endl;
    return 0;
}
