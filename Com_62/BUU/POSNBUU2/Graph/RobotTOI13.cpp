/*
    TASK: Robot TOI13
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j;
};
char a[2020][2020];
int dis[2020][2020],sum=0;
int di[]={0,0,1,-1},dj[]={1,-1,0,0};
A e[110];
queue<A> qu;
int main(){
    int r,c,i,j,ni,nj,ii,jj,cnt=0,cnt2=0,k,cnt3=0,si,sj,ei,ej;
    scanf("%d %d",&r,&c);

    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++){
            dis[i][j]=1<<30;
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='X'){
                dis[i][j]=0;
                qu.push({i,j});
            }
            if(a[i][j]=='A'){
                e[cnt2].i=i;
                e[cnt2].j=j;
                cnt2++;
            }

        }

    while(!qu.empty()){
        ni=qu.front().i,nj=qu.front().j;
        qu.pop();
        for(i=0;i<4;i++){
            ii=ni+di[i],jj=nj+dj[i];
            if(ii>r || ii<1 || jj < 1 || jj>c) continue;
            if(a[ii][jj]=='W') continue;
            if(dis[ii][jj] > dis[ni][nj]+1){
                dis[ii][jj] = dis[ni][nj]+1;
                qu.push({ii,jj});
            }
        }
    }

    for(i=0;i<cnt2;i++){
        if(dis[e[i].i][e[i].j] != 1<<30){
            cnt3++;
            sum+=dis[e[i].i][e[i].j]*2;
        }
    }
    printf("%d %d",cnt3,sum);
    return 0;
}
/*
5 5
EEEEE
AEAEW
WEEWW
WEEXE
WWEXA

5 5
WEEEE
AWAEW
WEEWW
WEEXE
WWEEE

5 9
EEEWEEEEE
EWEWEWEEE
AWXWEWWWE
EWWWEWEEE
EEEEEWAEE

5 5
WEEEE
AWEEW
WEEWW
WEEXE
WWEEE
*/
