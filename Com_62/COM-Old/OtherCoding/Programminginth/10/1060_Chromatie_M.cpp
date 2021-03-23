/*
    TASK: Chormatie Mt.
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int s[30],h[30];
char a[15][120];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,n,k,j,r=-2e9,c=-2e9,ii,jj;
    cin >> n;
    for(i=0;i<n;i++){
       cin >> s[i] >> h[i];
       r = max(r,h[i]);
       c = max(c,s[i]+2*h[i]-1);
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)
            a[i][j] = '.';
    }
    for(k=0;k<n;k++){
        for(i=0;i<h[k];i++){
            for(j=0;j<2*i+2;j++){
                ii = r-h[k]+i+1;
                jj = (s[k]+h[k]-i)+j-1;
                if(j == 0){
                    if(a[ii][jj]=='\\') a[ii][jj]='v';
                    else if(a[ii][jj]=='X');
                    else a[ii][jj]='/';
                }
                else if(j==i*2+1){
                    if(a[ii][jj]=='/') a[ii][jj]='v';
                    else if(a[ii][jj]=='X');
                    else a[ii][jj] = '\\';
                }
                else a[ii][jj] ='X';
            }
        }
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}
