#include<stdio.h>
#include<string.h>
char a[500];
int c[1000];
int main(){
int n,i,j,len,s=0;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf(" %s",a+1);
    len=strlen(a+1);
    for(j=1;j<=len;j++){
        if(a[j]=='M')
            c[j]+=1000;
        else if(a[j]=='C'&&a[j+1]=='M')
            c[j]+=900,j+=1;
        else if(a[j]=='C'&&a[j+1]=='D')
            c[j]+=400,j+=1;
        else if(a[j]=='X'&&a[j+1]=='C')
            c[j]+=90,j+=1;
        else if(a[j]=='X'&&a[j+1]=='L')
            c[j]+=40,j+=1;
        else if(a[j]=='I'&&a[j+1]=='X')
            c[j]+=9,j+=1;
        else if(a[j]=='I'&&a[j+1]=='V')
            c[j]+=4,j+=1;
        else if(a[j]=='D')
            c[j]+=500;
        else if(a[j]=='C')
            c[j]+=100;
        else if(a[j]=='L')
            c[j]+=50;
        else if(a[j]=='X')
            c[j]+=10;
        else if(a[j]=='V')
            c[j]+=5;
        else if(a[j]=='I')
            c[j]+=1;

    }
    for(j=1;j<=len;j++)
        s+=c[j];
    printf("%d\n",s);
    for(j=1;j<=len;j++)
        c[j]=0,s=0;
}

return  0;
}
/*
3
DCCXXVI
XLIX
MMCDLXXXIX */
