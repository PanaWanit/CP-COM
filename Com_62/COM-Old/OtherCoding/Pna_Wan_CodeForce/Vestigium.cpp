/*
    TASK: Vestigium
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[105][105];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,j,q,z=1,r,c,k,n;
    cin >> q;
    while(q--){
        k=0,r=0,c=0;
        cin >> n;
        cout << "Case #" << z << ": ";
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin >> a[i][j];
        for(i=0;i<n;i++) k+=a[i][i];
        for(i=0;i<n;i++){
            set<int> s;
            for(j=0;j<n;j++){
                s.insert(a[i][j]);
            }
            if(s.size()!=n) r++;
        }
        for(i=0;i<n;i++){
            set<int> s;
            for(j=0;j<n;j++){
                s.insert(a[j][i]);
            }
            if(s.size()!=n) c++;
        }
        cout << k << " " << r << " " << c << '\n';
        z++;
    }
    return 0;
}
/*
3
4
1 2 3 4
2 1 4 3
3 4 1 2
4 3 2 1
4
2 2 2 2
2 3 2 3
2 2 2 3
2 2 2 2
3
2 1 3
1 3 2
1 2 3

*/
