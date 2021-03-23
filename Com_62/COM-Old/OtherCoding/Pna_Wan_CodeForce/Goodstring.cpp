#include<bits/stdc++.h>
using namespace std;

void use_ios(){ios::sync_with_stdio(0);cin.tie(0);}
string s;
int dvc(int l, int r,char a){
    if(l==r) return s[l]!=a;
    int mb = (l+r)/2 , lb = 0 , rb=0;
    for(int i=l;i<=mb;i++)
        lb += (a!=s[i]);
    for(int i=mb+1;i<=r;i++)
        rb += (a!=s[i]);
    return min(lb+dvc(mb+1,r,a+1) , rb+dvc(l,mb,a+1));
}
int main(){
    use_ios();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n >> s;
        cout << dvc(0,n-1,'a') << "\n";
    }
    return 0;
}