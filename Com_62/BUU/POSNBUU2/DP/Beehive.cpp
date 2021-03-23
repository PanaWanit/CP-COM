/*
    TASK: Beehive
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010][1010];
int cc[1010][1010];
int main(){
    int n,m,i,j,tmp,now,cou;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=m;i++) cc[1][i]=1;

    for(i=2;i<=n;i++){
        for(j=1;j<=m;j++){
            cou=0,tmp=0;
            if(i%2==1){
                if(tmp < a[i-1][j-1]){
                    tmp = a[i-1][j-1];
                    cou +=cc[i-1][j-1];
                }
            }
            else{
                if(tmp < a[i-1][j+1]){
                    tmp=a[i-1][j+1];
                    cou +=cc[i-1][j+1];
                }
            }
            if(tmp < a[i-1][j]){
                tmp = a[i-1][j];
                cou = cc[i-1][j];
            }
            else if(tmp == a[i-1][j]){
                cou +=cc[i-1][j];
            }
            cc[i][j]=cou;
            a[i][j]+=tmp;

        }

    }
    tmp=0,cou=0;
    for(j=1;j<=m;j++){
        if(tmp <a[n][j]){
            tmp = a[n][j];
            cou = cc[n][j];
        }
        else if(tmp==a[n][j]){
            cou +=cc[n][j];
        }
    }
    printf("%d %d\n",tmp,cou);

    return 0;
}
