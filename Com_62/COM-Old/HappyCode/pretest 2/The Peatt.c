#include<stdio.h>
#include<string.h>
#include<math.h>
char a[1000],c[10];
int ans,b[100],cnt[1000][1000],all=0,,ch=0;
int main()
{
    int q,i,j,l;
    scanf("%d",&q);
    while(q--)
    {
            ans=0;
        for(i=0;i<=100;i++){
            a[i]=c[i]="";
            b[i]=0;


            for(j=0;j<=60;j++)
        {
            cnt[i][j]=0;

        }//clear
    }

        scanf(" %s",a+1);
        int len=strlen(a+1);
        if(len%3==1)
            a[0]=a[-1]='0';
        else if(len%3==2)
            a[0]='0';


        for(i=len; i>=1; i-=3)
        {


            for(j=0;j<3;j++)
            {
                c[i]=(a[i-j]);

                if(c[i]!=0)
                b[j]=(c[i]-'0');
                l=1;
                for(int k=0;k<j;k++)
                    l*=10;
                cnt[i][j]=b[j]*l;



            }

        }



        for(i=len;i>=1;i-=3)
           for(j=0;j<3;j++)
            {
                ans+=cnt[i][j];

            }
            printf("%d",ans);



    }
    return 0;
}
