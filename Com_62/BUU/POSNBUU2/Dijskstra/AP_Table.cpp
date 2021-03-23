/*
    TASK: AP_Table
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    long long i,j,w;
    bool operator <(const A&o) const{
        return w > o.w;
    }
};
char a[33][33];
long long dis[33][33];
long long di[]={0,0,1,-1},dj[]={1,-1,0,0};
priority_queue<A> he;
void diset(long long n){
    long long i,j;
    for(i=0;i<=n;i++)
        for(j=0;j<=n;j++) dis[i][j]=1e15;
}
int main(){
    long long q,i,j,n,x,y,k,si,sj,ei,ej,ans=-1e15,sum,ni,nj,ii,jj,z;
    scanf("%lld",&q);
    while(q--){
        long long ans=-1e15,cnt=0;
        scanf("%lld %lld %lld",&n,&x,&y);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                scanf(" %c",&a[i][j]);
        }
        for(k=0;k<n;k++){
            for(j=0;j<n;j++){
                si=k,sj=j;
                //printf("[%lld %lld]\n",k,j);
                diset(n);
                dis[si][sj]=0;
                he.push({si,sj,0});
                while(!he.empty()){
                    ni=he.top().i,nj=he.top().j;
                    he.pop();
                    for(i=0;i<4;i++){
                        ii=ni+di[i],jj=nj+dj[i];
                        if(ii<0||ii>=n||jj>=n||jj<0) continue;
                        if(a[ni][nj]==a[ii][jj]) z=x;
                        else z=y;
                        if(dis[ii][jj] > dis[ni][nj]+z){
                            dis[ii][jj] = dis[ni][nj]+z;
                            he.push({ii,jj,dis[ii][jj]});
                        }
                    }
                }
                for(i=0;i<n;i++){
                    for(z=0;z<n;z++){
                        ans=max(ans,dis[i][z]);
                    }
                }

            }
        }

        //while(!he.empty()) he.pop();
            printf("%lld\n",ans);
    }
    return 0;
}
/*
2
3 1 2
AAA
ABA
AAB
3 1 2
BBB
BBB
BBB
*/
