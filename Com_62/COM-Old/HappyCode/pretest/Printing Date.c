#include<stdio.h>
#include<string.h>
char a[15][15]={"","January","February","March","April","May","June","July","August","September","October","November","December"};



int main()
{

    int q,n,d,m,y,f,s1,s2,s3;
    scanf("%d",&q);
    while(q--){
    scanf("%d/%d/%d %d",&d,&m,&y,&f);
    if(d<1||d>31||m>12||m<1||y<1000||y>3000)
    {
       printf("No\n"); continue;
    }
    if(f==2)
        printf("%02d %s, %d\n",d,a[m],y);
    if(f==3)
        printf("%s %02d, %02d\n",a[m],d,y);
    if(f==4)
        printf("%02d %s, %02d\n",d,a[m],y%100);

    }
    return 0;
}
/*3 12/01/2007 2 01/04/1998 3 05/07/1999 4 */
