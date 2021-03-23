/*
    TASK: location
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int qs[1010][1010];
int main(){
    int n,m,i,j,k,mx=-2e9,x1,y1,x2,y2;
    scanf("%d %d %d",&n,&m,&k);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&qs[i][j]);
            qs[i][j]=qs[i][j]+qs[i-1][j]+qs[i][j-1]-qs[i-1][j-1];
        }
    }
    for(i=k;i<=n;i++){
        for(j=k;j<=m;j++){
            x1=i-k+1;
            y1=j-k+1;
            x2=i;
            y2=j;
            int sum=qs[x2][y2]-qs[x1-1][y2]-qs[x2][y1-1]+qs[x1-1][y1-1];
            mx=max(mx,sum);
        }
    }
    printf("%d\n",mx);
    return 0;
}
/*
5 10
2
5 9 2 9 1 2 8 9 1 6
9 1 3 9 8 4 2 1 5 7
2 7 9 3 8 5 2 7 6 8
1 6 2 1 7 7 1 9 4 1
8 5 2 3 9 8 5 6 3 3

102 120
129 155

155 -
*/
