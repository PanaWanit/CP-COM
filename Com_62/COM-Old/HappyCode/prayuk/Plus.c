#include<stdio.h>
#include<string.h>
char a[6000],b[6000];
int c[6000],k;
int main()
{
    int lena,lenb,i,j,tod=0;
    scanf(" %s %s",a,b);
    //if(a[0]=='-'&&b[0]!='-')
     //   while(1);
    //if(a[0]!='-'&&b[0]=='-')
    //    while(1);
    if(a[0]=='0'&&b[0]=='0'){printf("0\n");return 0;}
    if(a[0]=='-'&&b[0]=='-')
    {
        strcpy(a,&a[1]);
        strcpy(b,&b[1]);
        printf("-");
    }
    lena = strlen(a);
    lenb = strlen(b);
    for(i=lena-1,j=lenb-1;i>=0&&j>=0;i--,j--){
        c[k]=a[i]-'0'+b[j]-'0'+tod;
        tod = c[k]/10;
        c[k] %=10;

        k++;
    }
    for(;i>=0;i--)
    {
        c[k]=a[i]-'0'+tod;
        tod = c[k]/10;
        c[k] %=10;
        k++;
    }
    for(;j>=0;j--)
    {
        c[k]=b[j]-'0'+tod;
        tod = c[k]/10;
        c[k] %=10;
        k++;
    }
     c[k]=tod;
    for(k++;c[k]==0;k--);
    for(;k>=0;k--)
        printf("%d",c[k]);
return 0;
}
