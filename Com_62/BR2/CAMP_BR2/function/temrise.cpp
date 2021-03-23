#include<bits/stdc++.h>
using namespace std;
int cnt=0,mx=-100;
int n,m,l;
int a[30][30];
int di[4]={0,0,1,-1},dj[4]={1,-1,0,0};

void play(int i,int j){
if(a[i][j]>mx)
    mx=a[i][j];

  for(int k=0;k<4;k++)
  {
      int ii=i+di[k],jj=j+dj[k];
      if(ii<=m&&jj<=m&&ii>=1&&jj>=1&&a[ii][jj]>a[i][j]&&a[ii][jj]!=100)
          play(i+di[k],j+dj[k]);

  }
}

int main()
{
    int x,y,i,j;
    scanf("%d %d %d",&m,&y,&x);
    for(i=1;i<=m;i++)
        for(j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
            mx=-100;
    play(x,y);
    printf("%d",mx);



    return 0;
}
/*
4
2 1
100 1 3 8
0 2 1 4
2 3 5 100
0 8 8 100

1
1 1
9

5
4 2
0 1 100 100 0
100 2 3 1 1
100 100 4 5 100
8 7 100 6 100
7 100 100 100 9

*/
