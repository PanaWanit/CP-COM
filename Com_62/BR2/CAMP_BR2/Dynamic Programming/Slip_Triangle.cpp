#include<bits/stdc++.h>
using namespace std;

int ip[1100][1100];
int sum[1100][1100];
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            scanf("%d",&ip[i][j]);
    }
    sum[0][0] = ip[0][0];

    for(i=1;i<n;i++){
        for(j=0;j<=i;j++){
        if(j==0){
            ///left
            sum[i][j]=ip[i][j]+sum[i-1][j];
        }
        else if(j==i){
            ///right
            sum[i][j]=ip[i][j]+sum[i-1][j-1];
        }



        else
        {   ///middle
            sum[i][j] = ip[i][j]+max(sum[i-1][j],sum[i-1][j-1]);
  }
        }



}
            int ans=-1e9;
            for(j=0;j<n;j++)
            ans = max(ans,sum[n-1][j]);
        printf("%d",ans);
    return 0;
}
/*
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5

*/
/*
[0,0]
[1,0][1,1]
[2,0][2,1][2,2]
[3,0][3,1][3,2][3,3]
*/
