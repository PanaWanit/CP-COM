/*
    TASK: SpaceShip
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int x,y,z;
};
A a[25];
int m[25],k[25],c[25],ans=1e9,mn=0,mark[25];
int nowm,nowk,nowc,n,ld;
void play(int state,int x,int y,int z){
    if(nowm >=n && nowk >=n && nowc>=n){
        ans=min(ans,mn);
    }
    if(state==ld) {
        return;
    }
    for(int i=1;i<=ld;i++){
        if(!mark[i]){
            mark[i]=1;
            mn+=((x-a[i].x)*(x-a[i].x))+((y-a[i].y)*(y-a[i].y))+((z-a[i].z)*(z-a[i].z));
            nowm+=m[i],nowk+=k[i],nowc+=c[i];
            play(state+1,a[i].x,a[i].y,a[i].z);
            mn-=((x-a[i].x)*(x-a[i].x))+((y-a[i].y)*(y-a[i].y))+((z-a[i].z)*(z-a[i].z));
            nowm-=m[i],nowk-=k[i],nowc-=c[i];
            mark[i]=0;
        }
    }
}
int main(){
    int i,j,sx,sy,sz;
    scanf("%d",&n);
    scanf("%d %d %d",&sx,&sy,&sz);
    scanf("%d",&ld);
    for(i=1;i<=ld;i++) scanf("%d %d %d %d %d %d",&a[i].x,&a[i].y,&a[i].z,&m[i],&k[i],&c[i]);
    play(0,sx,sy,sz);
    printf("%d",ans);
    return 0;
}
/*
1
0 0 0
2
10 0 0
2 5 7
0 10 0
0 3 9

5
0 0 0
5
60 34 56
0 5 7
90 41 92
1 7 8
24 61 81
6 8 8
41 86 70
5 6 7
46 97 85
9 2 4
*/
