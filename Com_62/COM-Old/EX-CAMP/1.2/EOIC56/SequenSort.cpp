#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>a;
vector<int> b;
int main(){
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&k);
            b.push_back(k);
        }
        a.push_back(b);
        b.clear();

    }
    sort(a.begin(),a.end());
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}
/*
5 3
7 10 6
1 3 5
1 2 7
1 3 4
3 10 6
*/
