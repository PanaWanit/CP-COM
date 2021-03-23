#include<stdio.h>
#include<string.h>
#include<math.h>
char a[100],b[10];
int main()
{
    int len,n,cnt=0,num,i;
    n=5;
    while(n--){
    scanf(" %s",a+1);
    len = strlen(a+1);

    for(i=1,num=0;i<=len;i++)
        num+=(a[i]-48)*pow(10,len-i);
    for(i=1,cnt=0;i<=len;i++)
        cnt+=pow(a[i]-48,i);

    if(cnt==num)
        printf("Y");
    else
        printf("N");
    }
return 0;
}
