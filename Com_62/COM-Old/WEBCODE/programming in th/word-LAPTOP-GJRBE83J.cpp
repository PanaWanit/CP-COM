#include<bits/stdc++.h>
using namespace std;
char a[30][30];
string s;
int di[]={1,-1,0,0,1,1,-1,-1},dj[]={0,0,1,-1,1,-1,-1,1},len,dir,r,c;
bool findword(int i,int j,int now){
    if(now==len) return 1;
    int ii = i+di[dir] , jj=j+dj[dir];
    if(ii <0 || ii>=r || jj <0 || jj>=c) return 0;
    if(a[ii][jj] != s[now] ) return 0;
    return findword(ii,jj,now+1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,j;
    cin >> r >> c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];if(a[i][j]<='Z') a[i][j]+=('a'-'A');
        }
    }
    int q;
    for(cin >> q;q--){
        bool ch=0;
        cin >> s;
        len = s.size();
        for(i=0;i<len;i++)
            if(s[i]<='Z') s[i]+=('a'-'A');
        for(i=0;i<r && !ch;i++){
            for(j=0;j<c && !ch;j++){
                if(a[i][j]==s[0]){
                    for(dir=0;dir<8;dir++){
                        if(findword(i,j,1)==1){
                            ch=1;//,ai=i,aj=j;
                            break;
                        }
                    }
                }
            }
        }
        cout << i << " " << j << "\n";
    }
    return 0;
}
