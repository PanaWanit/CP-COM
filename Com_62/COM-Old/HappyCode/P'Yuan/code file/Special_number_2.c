#include<stdio.h>
#include<math.h>
char a[10],c[10];
int main(){
    int i,j,len,sum,b;
    for(i=0;i<5;i++){
        sum=0,b=0;
        scanf(" %s",a+1);
        len=strlen(a+1);
        for(j=1;j<=len;j++){
                b*=10;
                b+=a[j]-'0';
            sum+=pow((a[j]-'0'),j);
        }
        if(sum==b)c[i]='Y';
        else      c[i]='N';
    }
    for(i=0;i<5;i++)
        printf("%c",c[i]);
    return 0;
}
