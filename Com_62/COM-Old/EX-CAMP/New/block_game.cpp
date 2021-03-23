#include<bits/stdc++.h>
using namespace std;
char a[30][30],fnd;
int di[4]= {0,0,1,-1},dj[4]= {1,-1,0,0},n,m,score=0;
void scnt(int i,int j)
{
    for(int k=0; k<4; k++)
    {

        int ii=i+di[k],jj=j+dj[k];
        if(ii<0||jj<0||ii>=n||jj>=m) continue;
        if(a[ii][jj]==fnd)
        {
            a[ii][jj]='-';
            score+=5;
            scnt(ii,jj);
        }
    }
}
void drop(int i,int j)
{
    if(a[i+1][j]=='-')
    {
        swap(a[i][j],a[i+1][j]);
        drop(i+1,j);
    }
}
void dropch()
{
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            if(isalpha(a[i][j]))
            {
                if(a[i+1][j]=='-')
                    drop(i,j);
            }
        }
}
void ch()
{
    int i,j,g,p;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            if(isalpha(a[i][j]))
            {
                fnd=a[i][j];
                if(a[i+1][j]==fnd||a[i-1][j]==fnd||a[i][j+1]==fnd||a[i][j-1]==fnd)
                {
                    score+=5;
                    a[i][j]='-';
                    scnt(i,j);

                }
                for(g=0;g<n;g++)
                    for(p=0;p<m;p++)
                if(isalpha(a[g][p])&&a[g+1][p]=='-')
                        drop(g,p);
            }

        }


}



void play(int i,int j,int dir)
{
    int z;
    if(dir==0&&a[i][j-1]!='-')
        score-=5;
    else if(dir==1&&a[i][j+1]!='-')
        score-=5;
    else if(dir==0&&j-1<0)
        score-=5;
    else if(dir==1&&j+1>=m)
        score-=5;
    else
    {

        if(!dir)
            z=j-1;
        else if(dir)
            z=j+1;
        swap(a[i][z],a[i][j]);
        if(a[i+1][z]=='-')
            drop(i,z);

    }
}
/*----------------------------------------------------------------------------------------------------------------------------------------*/
int main()
{
    scanf("%d %d",&n,&m);
    int i,j,x,y,g,p;
    char dir;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf(" %c",&a[i][j]);
    int q;
    scanf("%d",&q);
    ///q
    while(q--)
    {
        dropch();
        ch();

        scanf("%d %d %c",&i,&j,&dir);
        if(dir=='L')
            x=0;
        else if(dir=='R')
            x=1;
        if(!isalpha(a[i][j]))
            score-=5;
        else
            play(i,j,x);

    }
    ///q
    ch();
    dropch();
    printf("%d\n",score);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%c ",a[i][j]);
        printf("\n");
    }
    return 0;
}
/*-----------------------------------------------------------------------------------------------------------------------------------------*/
/*
5 5
# - A - #
# - B - #
# - A - #
# - B - #
# # # # #
0

*/
