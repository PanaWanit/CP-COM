#include<bits/stdc++.h>
char a[1010][1010],b[10010];
using namespace std;
int main()
{
    int n,m,k,i,j,l,ansi,ansj,ch=0,cnt=0;
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            scanf(" %c",&a[i][j]);

    }
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            a[i][j]=tolower(a[i][j]);
    scanf("%d",&k);
    while(k--)
    {
        scanf(" %s",b);
        int len=strlen(b);
        for(i=0; i<=len; i++)
            b[i]=tolower(b[i]);


        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {

                if(a[i][j]==b[0])
                {

                   if(a[i+1][j]==b[1])
                   {
                       for(l=0;l<len&&l+i<n;l++)
                       {
                            if(a[i+l][j]!=b[l])
                                ch=1;
                       }
                       if(ch)
                        {ch=0;}
                       else {printf("%d %d\n",i,j);continue;}
                   }

                  if(a[i-1][j]==b[1])
                   {
                       for(l=0;l<len&&l-i>=0;l++)
                       {
                            if(a[i-l][j]!=b[l])
                                ch=1;
                       }
                       if(ch)
                        {ch=0;}
                       else {printf("%d %d\n",i,j);continue;}
                   }

                   if(a[i][j+1]==b[1])
                   {
                       for(l=0;l<len&&l+j<m;l++)
                       {
                            if(a[i][j+l]!=b[l])
                                ch=1;
                       }
                       if(ch)
                        {ch=0;}
                       else {printf("%d %d\n",i,j);continue;}
                   }

                   if(a[i][j-1]==b[1])
                   {
                       for(l=0;l<len&&l-j>=0;l++)
                       {
                            if(a[i][j+l]!=b[l])
                                ch=1;
                       }
                       if(ch)
                        {ch=0;}
                       else {printf("%d %d\n",i,j);continue;}
                   }

                if(a[i+1][j+1]==b[1])
                   {
                       for(l=0;l<len;l++)
                       {
                            if(a[i+l][j+l]!=b[l])
                                ch=1;

                       }
                       if(ch)
                        {ch=0;}
                        {printf("%d %d\n",i,j);continue;}
                   }













                }

            }
        }
    }

        return 0;
    }



/*
8 11
ascDEFGhigg
hTqkComPutk
FayUcompuTm
FcsierMqsrc
bkoArUePeyv
Klcbqwekumk
sreTNIophtb
yUiqlxcnBje
4
Compute
Queue
stack
Pointer

*/
