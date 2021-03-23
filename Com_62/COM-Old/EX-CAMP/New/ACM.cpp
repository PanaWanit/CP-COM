#include<bits/stdc++.h>
using namespace std;
char a[300];
int main()
{
    int q,i,j,n,len,ch=0;
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {

        scanf(" %s",a);
        len = strlen(a);

    /// x
        for(j=0;j<len;j++)
        {
            if(a[j]=='X')
            {
                printf("Case #%d: No - Runtime error \n",i);
                ch=1;
                break;

            }
        }
        if(ch) {ch=0;continue;}

    ///T
        for(j=0;j<len;j++)
        {
         if(a[j]=='T')
            {
                printf("Case #%d: No - Time limit exceeded\n",if);
                ch=1;
                break;

            }
        }
        if(ch) {ch=0;continue;}
    /// -
        for(j=0;j<len;j++)
        {
            if(a[j]=='-')
            {
                printf("Case #%d: No - Wrong answer\n",i);
                ch=1;
                break;

            }
        }
        if(ch) {ch=0;continue;}


    ///Yes
        printf("Case #%d: Yes \n",i);

    }
    return 0;
}
/*
7 PPPPPPPPPP PPPPTTTTTT XXXXXXXXXX -PPPP P--PPXXTXX P-PP-TTTTT PPPPPPPPPPPPPPPPPPPP
*/
