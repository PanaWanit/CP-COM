#include<stdio.h>

int main(){
char x;
scanf("%c",&x);
if(x>='a' && x<='z'){
    printf("Small");
}
else if(x>='A'&&x<='Z'){

    printf("Big");
}
else {printf("Not Alphabet");}
return 0;
}
