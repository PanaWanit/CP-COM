#include<stdio.h>
#include<string.h>
int main(){
    char x;
    scanf("%c",&x);
    if(isupper(x)){ //is upper check -> Capital Letter
       x-=65,x+=2,x%=26,x+=65;
       printf("%c",x);
    }
    else{
       x-=97,x+=2,x%=26,x+=97;
       printf("%c",x);
    }
}
