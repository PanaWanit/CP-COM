#include<bits/stdc++.h>
using namespace std;
int main(){
     int x;
         scanf("%d",&x);
        if(x>=80) printf("A");
        else if(x>=75&&x<=79)
        printf("B+");
        else if(x>=70&&x<=74)
        printf("B");
        else if(x>=65&&x<=69)
        printf("C+");
        else if(x>=60&&x<=61)
        printf("C");
        else if(x>=55&&x<=59)
        printf("D+");
        else if(x>=50&&x<=54){
        printf("D");
        else
        printf("F");


    return 0;
}
