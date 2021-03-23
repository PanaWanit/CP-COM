#include<stdio.h>
#include<string.h>
char a[1010][1010];
int n,m,c;
void play(int i,int j){
    a[i][j]='.';
    c++;
    if(i+1<=n&&a[i+1][j]=='*') play(i+1,j);
    if(j+1<=m&&a[i][j+1]=='*') play(i,j+1);
    if(i-1>=1&&a[i-1][j]=='*') play(i-1,j);
    if(j-1>=1&&a[i][j-1]=='*') play(i,j-1);
}
int main(){
    int i,j,mx=-1;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i][j]=='*'){
                c=0;
                play(i,j);
                if(mx<c)
                    mx=c;
            }
        }
    }
    printf("%d",mx);
    return  0;
}
/*
10 5
..*.....**
.**..*****
.*...*....
..****.***
..****.***
*/
