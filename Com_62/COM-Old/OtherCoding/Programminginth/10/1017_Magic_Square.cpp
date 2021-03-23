/*
    TASK: Magic Square
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[11][11],mark[101];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,i,j,num=0,ch=0,num2;
    cin >> n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            cin >> a[i][j];
            if(mark[a[i][j]]) ch=1;
            mark[a[i][j]]=1;
        }

    for(i=0;i<n;i++) num+=a[i][0];

    for(j=0;j<n;j++){
        for(i=0,num2=0;i<n;i++){
            num2+=a[i][j];
        }
        if(num2 != num) ch=1;
    }
    for(i=0,num2=0;i<n;i++){
        num2 += a[i][i];
    }
    if(num2!=num) ch=1;
   for(i=n-1,num2=0;i>=0;i--){
        num2 += a[i][n-1-i];
    }
    if(num2!=num) ch=1;
    printf((ch==1)?"No":"Yes");
    return 0;
}
