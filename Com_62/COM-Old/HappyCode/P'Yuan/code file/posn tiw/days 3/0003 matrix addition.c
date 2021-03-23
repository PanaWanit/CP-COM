#include<stdio.h>
int main(){
int i,j,x,y,z,n,m,l,a[100][100],b[100][100];
scanf("%d %d",&m,&n);
for(i=0;i<m;i++){
    for(j=0;j<n;j++)    scanf("%d",&a[i][j]);
}
for(i=0;i<m;i++){
     for(j=0;j<n;j++)    scanf("%d2",&b[i][j]);
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++)    printf("%d ",a[i][j]+b[i][j]);printf("\n");
}

return 0;
}
