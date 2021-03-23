#include<stdio.h>
int a[5000]={1};
int main()
{
    int cnt=1,i,tod=0,j;
    for(j=0;j<3;j++){
            tod=0;
    for(i=1;i<cnt;i++)
    {
        a[i] = a[i]*7 + tod;
        tod = a[i]/10;
        a[i]%=10;
    }
    if(tod)
        a[i++]=tod;
    cnt=i;
    for(i--;i>=0;i--)
    printf("%d",a[i]);
    printf("\n");

    }
}
