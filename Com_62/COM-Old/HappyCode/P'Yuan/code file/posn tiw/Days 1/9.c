#include<stdio.h>

int main(){
char x;

scanf("%c",&x);
if(x>='a'&&x<='z'){
    printf("%c",x-32);
}
if(x>='A'&&x<='Z'){
    printf("%c",x+32);
}
return 0;
}
