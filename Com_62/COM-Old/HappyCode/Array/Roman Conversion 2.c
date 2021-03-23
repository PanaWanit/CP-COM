#include<stdio.h>
#include<string.h>
char a[30];
int main(){
int len,i,q,cnt=0,j;
scanf("%d ",&q);

while(q--){


 scanf(" %s",a+1);
len = strlen(a+1);



for(j=1;j<=len;j++)
{
    if(a[j]=='M') cnt+=1000;
    else if(a[j]=='C'&&a[j+1]=='M') cnt+=900,j++;
    else if(a[j]=='D') cnt+=500;
    else if(a[j]=='C'&&a[j+1]=='D') cnt+=400,j++;
    else if(a[j]=='C')cnt+=100;
    else if(a[j]=='X'&&a[j+1]=='C') cnt+=90,j++;
    else if(a[j]=='L') cnt+=50;
    else if(a[j]=='X'&&a[j+1]=='L') cnt+=40,j++;
    else if(a[j]=='X') cnt+=10;
    else if(a[j]=='I'&&a[j+1]=='X') cnt+=9,j++;
    else if(a[j]=='V') cnt+=5;
    else if(a[j]=='I'&&a[j+1]=='V') cnt+=4,j++;
    else if(a[j]=='I') cnt+=1;
}
printf("%d\n",cnt),cnt=0;
}
return 0;
}
/*
3
DCCXXVI
XLIX
MMCDLXXXIX
*/


