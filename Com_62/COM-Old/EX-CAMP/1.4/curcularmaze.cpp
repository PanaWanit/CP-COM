#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
int di[4]={0,0,-1,1},dj[4]={1,-1,0,0};
int dis[150][150];
char a[150][150];
queue<A> qu;
int main(){
    int r,c,ii,jj,ni,nj,ei,ej,si,sj,i,j;
    scanf("%d %d ",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='S') si=i,sj=j;
            else if(a[i][j]=='E') ei=i,ej=j;
        }
    }
        memset(dis,-1,sizeof dis);
        dis[si][sj]=0;
        qu.push({si,sj});
        while(!qu.empty()){
            ni=qu.front().i,nj=qu.front().j;
            qu.pop();
            for(i=0;i<4;i++){

                ii=(ni+di[i]+r)%r,jj=(nj+dj[i]+c)%c;
                if(a[ii][jj]=='#') continue;
                if(dis[ii][jj]!=-1) continue;

                dis[ii][jj]=dis[ni][nj]+1;
                qu.push({ii,jj});
            }

        }



    i=ei,j=ej;
    while(dis[i][j]!=0){
        ni=i,nj=j;

        for(int k=0;k<4;k++){
            ii=(ni+di[k]+r)%r,jj=(nj+dj[k]+c)%c;
            if(a[ii][jj]=='#') continue;
            if(dis[ii][jj]==-1) continue;
            if(dis[ii][jj]+1==dis[ni][nj]){
                if(dis[ii][jj]!=0)
                a[ii][jj]='x';
                i=ii,j=jj;break;
            }
        }

    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
/*
6 12
####.#..####
.S.#..#.#E##
#.#...#.#..#
..##..#..#..
.#.#.#.###.#
.........###

*/
