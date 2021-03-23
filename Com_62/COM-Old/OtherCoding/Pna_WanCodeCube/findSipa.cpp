/*
    TASK:
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mark[1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin >> a;
    b=a;
    int i,len=b.size(),l=0,cnt=0;
    for(i=0;i<len;i++){
        if(isupper(b[i])) b[i]+=('a'-'A');
    }
    for(i=0;i<len-3;i++){
        if(b[i]=='s' && b[i+1]=='i' && b[i+2]=='p' && b[i+3]=='a'){
            mark[i]=1,mark[i+3]=1;cnt++;
        }
    }
    for(i=0;i<len;i++){
        if(mark[i]){
            if(l==0) cout << '\"' << a[i],l=1;
            else if(l==1) cout << a[i] << '\"',l=0;
        }
        else cout << a[i];
    }
    cout << '\n' << cnt;
    return 0;
}
