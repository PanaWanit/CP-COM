#include<stdio.h>
int main(){
int i,j,k,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=0;j<n;j++)
        printf("%d ",i+j);
printf("\n");

}
for(i=1;i<=n;i++){
    for(j=0;j<n;j++){
            k=(i+j)%n+1;
            //if(k==0){k=n;}
        printf("%d ",k);}
    printf("\n");

}

return 0;
}
