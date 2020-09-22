#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1;
int mark[mxN];
unordered_map<int,int> mp;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        int x=0;
        string a;
        cin >> a;
        for(int i=0;i<m;i++){
            x += (int)(a[i]-'0') << i; 
        }
        mp[x] = i;
    }
    int q;
    for(cin >> q;q--;){
        int len,x=0;
        bool ch=0;
        string a;
        cin >> len >>  a;
        for(int i=0;i<m;i++){
            x += (int)(a[i]-'0') << i;
        }
        if(mp[x]) mark[mp[x]]=1,ch=1;
        x = x >> 1;
        for(int i=m;i<len;i++){
            x += (a[i]-'0') << (m-1);
            if(mp[x]) mark[mp[x]] = 1 , ch=1;
            x = x>>1;
        }
		  if(!ch) cout << "OK";
		  else for(int i=1;i<=n;i++) if(mark[i]) cout << i << " ",mark[i]=0;
        cout << "\n";
    }
    return 0;
}
