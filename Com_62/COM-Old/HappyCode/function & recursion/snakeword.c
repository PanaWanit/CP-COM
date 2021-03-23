#include<stdio.h>
#include<string.h>
#include<ctype.h>
char a[100][100],b[200],mark[100][100];
int r,c,len,d[200][2],ch,di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

void play(int i, int j, int state)
{
    d[state][0]=i,d[state][1]=j;
    if(state==len-1)
    {
        for(i=0;i<=len-1;i++)
            printf("%d %d\n",d[i][0]+1,d[i][1]+1);
        ch=0;
        return;
    }
    int k,ii,jj;
    for(k=0;k<4;k++){
        ii = i+di[k],jj =j+ dj[k];
        if(ii<0||ii>=r||jj<0||jj>=c) continue;
        if(a[ii][jj]!=b[state+1]) continue;
        if(mark[ii][jj]) continue;
            mark[ii][jj]=1;
            play(ii,jj,state+1);
            mark[ii][jj]=0;
    }
}

int main()
{
    int i,j,q;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %c",&a[i][j]);
            a[i][j] = tolower(a[i][j]);
            }
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf(" %s",b);
        len = strlen(b);
        for(i=0;i<len;i++)
            b[i] = tolower(b[i]);

        for(i=0,ch=1;i<r;i++){
            for(j=0;j<c;j++){
            if(a[i][j]==b[0]){
                mark[i][j]=1;
                play(i,j,0);
                mark[i][j]=0;
            }
        }

    }
        if(ch)
            printf("No Matching Word\n");
    }


return 0;
}
/*3 5 TAEPE TULAR STOPW 2 PEATT HELLOWORLD*/
