#include<stdio.h>
int a[2100][2100];
int main(){
int n,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=(1<<i),k=1;j<=(1<<n)-1&&k<=(1<<(n-1));j+=(1<<(i+1)),k+=(1<<(i))){
                for(l=0;l<(1<<i);l++){
                    a[j][k+l]=1;
                }
        }
    }
    for(i=1;i<=(1<<n)-1;i++){
        for(j=1;j<=(1<<(n-1));j++){
            if(a[i][j]) printf("*");
            else        printf("-");
        }
        printf("\n");
    }
    return 0;
}

