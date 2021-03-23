#include<stdio.h>

int main()
{
    char x;
    scanf("%c",&x);

    if(x=='y')
        printf("a");
    else if(x=='z')
        printf("b");
    else if(x=='Z')
        printf("B");
    else if(x=='Y')
        printf("A");
    else
        printf("%c",x+2);
    return 0;
}
