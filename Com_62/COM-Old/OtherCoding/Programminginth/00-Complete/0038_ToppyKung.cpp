/*
    TASK: ToppyKung
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<string,int> mp;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a[1001];
    int i,n;
    cin >> n;
    for(i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(!mp[a[i]]){
            cout << a[i] << '\n';
            mp[a[i]]=1;
        }

    }

    return 0;
}
