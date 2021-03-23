#include<bits/stdc++.h>
using namespace std;
int a[320][320],qsoy[320][320],qsox[320][320],qsex[320][320],qsey[320][320];
int main(){
    int r,c,k,i,j,mx=-2e9,sum=0,re,le,te,be;
    scanf("%d %d %d",&r,&c,&k);


    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++)
            scanf("%d",&a[i][j]);

    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if(j%2==0)
            qsox[i][j]+=a[i][j]+qsox[i][j-1];
            else
            qsox[i][j]+=a[i][j]*-1+qsox[i][j-1];
        }
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
        if(j%2==0)
            qsex[i][j]+=a[i][j]*-1+qsex[i][j-1];
            else
            qsex[i][j]+=a[i][j]+qsex[i][j-1];
        }

    }

    for(j=1;j<=c;j++){
        for(i=1;i<=r;i++){
            if(i%2==0)
                qsey[i][j]=a[i][j]*-1+qsey[i-1][j];
            else
                qsey[i][j]=a[i][j]+qsey[i-1][j];
        }
    }


    for(j=1;j<=c;j++){
        for(i=1;i<=r;i++){
            if(i%2==0)
                qsoy[i][j]=a[i][j]+qsoy[i-1][j];
            else
                qsoy[i][j]=a[i][j]*-1+qsoy[i-1][j];
        }
    }

    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            sum=0;
            if(i%2==0&&j%2==0){
                re=min(c,j+k);
                le=max(1,j-k);
                sum+=qsox[i][re]-qsox[i][le-1];

                te=max(1,i-k);
                be=min(r,i+k);

                sum+=qsoy[be][j]-qsoy[te-1][j];
            }
            else if(i%2!=0&&j%2!=0){
                re=min(c,j+k);
                le=max(1,j-k);
                sum+=qsex[i][re]-qsex[i][le-1];
                te=max(1,i-k);
                be=min(r,i+k);
                sum+=qsey[be][j]-qsey[te-1][j];
            }
            else if(j%2!=0&&i%2==0){
                re=min(c,j+k);
                le=max(1,j-k);
                sum+=qsex[i][re]-qsex[i][le-1];

                te=max(1,i-k);
                be=min(r,i+k);

                sum+=qsoy[be][j]-qsoy[te-1][j];
            }
            else{
                re=min(c,j+k);
                le=max(1,j-k);
                sum+=qsox[i][re]-qsox[i][le-1];

                te=max(1,i-k);
                be=min(r,i+k);

                sum+=qsey[be][j]-qsey[te-1][j];
            }
            sum-=a[i][j];
            //printf("%d %d %d\n",i,j,sum);
            mx=max(mx,sum);
        }
    }
    printf("%d",mx);

    return 0;
}
/*
5 4 2
2 2 3 5
3 2 4 0
5 3 1 2
0 2 0 1
3 2 1 5
*/
