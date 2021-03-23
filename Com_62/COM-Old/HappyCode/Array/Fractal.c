#include<stdio.h>
char a[2100][2100],b[2100][2100];
int main(){
int n,l,ll,lll,i,j,k;
scanf("%d",&n);
l=(1<<(n))-1;
ll=1<<(n-1);



for(i=1;i<=l;i++)
    for(j=1;j<=ll;j++)
        a[i][j]='-';

for(i=1;i<=l/2;i++)
    for(j=1;j<=ll;j++)
    a[i][j]='*',i+=2;//1

for(i=2;i<=l/2;i++)
    for(j=1;j<=ll;j++)
    a[i][j]='*',a[i][j+1]='*',i+=4,j+=1;//2

for(i=4;i<=l/2;i++)
    for(j=1;j<=ll;j++){
        for(k=0;k<4;k++)
            a[i][j+k]='*';
    i+=8,j+=3;
    }//4
for(i=8;i<=l/2;i++)
    for(j=1;j<=ll;j++){
        for(k=0;k<8;k++)
            a[i][j+k]='*';
    i+=16,j+=7;
    }//8
for(i=16;i<=l/2;i++)
    for(j=1;j<=ll;j++){
        for(k=0;k<16;k++)
            a[i][j+k]='*';
    i+=32,j+=15;
    }//16
for(i=32;i<=l/2;i++)
    for(j=1;j<=ll;j++){
        for(k=0;k<32;k++)
            a[i][j+k]='*';
    i+=64,j+=31;
    }//32
for(i=64;i<=l/2;i++)
    for(j=1;j<=ll;j++){
        for(k=0;k<64;k++)
            a[i][j+k]='*';
    i+=128,j+=63;
    }//64

for(i=128;i<=l/2;i++)
    for(j=1;j<=ll;j++){
        for(k=0;k<128;k++)
            a[i][j+k]='*';
    i+=256,j+=127;
    }//128

 for(i=256;i<=l/2;i++)
    for(j=1;j<=ll;j++){
        for(k=0;k<256;k++)
            a[i][j+k]='*';
    i+=512,j+=255;
    }//256

for(i=512;i<=l/2;i++)
    for(j=1;j<=ll;j++){
        for(k=0;k<512;k++)
            a[i][j+k]='*';
    i+=1024,j+=511;
    }//512

for(i=1024;i<=l/2;i++)
    for(j=1;j<=ll;j++){
        for(k=0;k<1024;k++)
            a[i][j+k]='*';
    i+=2048,j+=1023;
    }//1024





for(j=1;j<=ll;j++)
    a[l/2+1][j]='*';
for(i=1;i<=l;i++){
    for(j=1;j<=ll;j++)
        printf("%c",a[i][j]);
printf("\n");}
return 0;
}
