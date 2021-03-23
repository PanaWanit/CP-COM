#include<stdio.h>
int state;
char a[10000][10000];
int q,n,i,j,l,k,c;
void von()
{
    //printf("%d %d\n",i,j);
    if(c==1&&(a[i][j+2]=='#'||j==n-1))
        a[i++][j]='#',c=2;
    else if(c==2&&(a[i+2][j]=='#'||i==n-1))
        a[i][j--]='#',c=3;
    else if(c==3&&(a[i][j-2]=='#'||j==0))
        a[i--][j]='#',c=4;
    else if(c==4&&(a[i-2][j]=='#'||i==0))
        a[i][j++]='#',c=1;
    else if(c==1) a[i][j++]='#';
    else if(c==2) a[i++][j]='#';
    else if(c==3) a[i][j--]='#';
    else if(c==4) a[i--][j]='#';
}


int main()
{


    scanf("%d",&q);

    while(q--)
    {
        c=1;
        scanf("%d",&l);
        n=4*l-3;
        if(l==1) printf("#");
        else{

        for(i=0;i<n+2;i++){
            for(j=0;j<n+2;j++)
               a[i][j]='.';
        }

        i=0,j=0;
        while(1){
            if(a[i][j+2]=='#'&&a[i+2][j]=='#'&&a[i-1][j]!='#'&&a[i][j-1]=='#') break;
             von();
        }
        a[i][j]='#';
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                printf("%c",a[i][j]);
            printf("\n");
        }
        }

        printf("\n");
    }







return 0;
}
