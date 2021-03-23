#include<bits/stdc++.h>
using namespace std;
int a[1010][1010],b[1010][1010];
int main(){
    int r,c,n,mx=-2e9;
    scanf("%d %d %d",&r,&c,&n);
    int i,j,k;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]),b[i][j]=a[i][j];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            for(k=1;k<=n;k++){
                if(j+k==c) break;
                b[i][j]+=(a[i][j+k]*pow(-1,k));
            }

            for(k=1;k<=n;k++){
                if(i+k==r) break;
                b[i][j]+=(a[i+k][j]*pow(-1,k));
            }

            for(k=1;k<=n;k++){
                if(i-k==-1) break;
                b[i][j]+=(a[i-k][j]*pow(-1,k));
            }

            for(k=1;k<=n;k++){
                if(j-k==-1) break;
                b[i][j]+=(a[i][j-k]*pow(-1,k));
            }

        }
    }
     for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            mx=max(mx,b[i][j]);
     }


    printf("%d",mx);
}
/*
5 4 2
2 2 3 5
3 2 4 0
5 3 1 2
0 2 0 1
3 2 1 5
*/
