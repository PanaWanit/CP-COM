#include<bits/stdc++.h>
using namespace std;
char ab[500];
int main()
{
    int len;
    scanf("%d %s",&len,ab+1);
    int a=0,b=0,g=0;

    int i;
    for(i=1;i<=len;i++)
    {
        if(i%3==1) {if(ab[i]=='A')a++;}
        if(i%3==2) {if(ab[i]=='B')a++;}
        if(i%3==0) {if(ab[i]=='C')a++;}

        if(i%4==1){if(ab[i]=='B')b++;}
        if(i%4==2){if(ab[i]=='A')b++;}
        if(i%4==3){if(ab[i]=='B')b++;}
        if(i%4==0){if(ab[i]=='C')b++;}

        if(i%6==1){if(ab[i]=='C')g++;}
        if(i%6==2){if(ab[i]=='C')g++;}
        if(i%6==3){if(ab[i]=='A')g++;}
        if(i%6==4){if(ab[i]=='A')g++;}
        if(i%6==5){if(ab[i]=='B')g++;}
        if(i%6==0){if(ab[i]=='B')g++;}

    }
    //printf("%d %d %d\n\n",a,b,g);
    if(a==b&&a==g)
        printf("%d\nAdrian\nBruno\nGoran",a);
    else if(a>b&&a>g)
        printf("%d\nAdrian",a);
    else if(b>a&&b>g)
        printf("%d\nBruno",b);
    else if(g>a&&g>b)
        printf("%d\nGoran",g);
    else if(a==b&&a>g)
        printf("%d\nAdrian\nBruno",a);
    else if(a==g&&a>b)
        printf("%d\nAdrian\nGoran",a);
    else if(b==g&&b>a)
        printf("%d\nBruno\nGoran",b);

    return 0;
}
