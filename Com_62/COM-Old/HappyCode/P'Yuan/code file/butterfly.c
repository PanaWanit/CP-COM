#include<stdio.h>
int main(){
int i,j,k,n;
char c;
scanf(" %c %d",&c,&n);
for(i=1;i<=n/2;i++){
    for(j=0;j<i;j++)
        printf("%c",c);
    for(j=0;j<n/2-i;j++)
        printf(".");
    for(j=0;j<n/2-i;j++)
        printf(".");
    for(j=0;j<i;j++)
        printf("%c",c);

printf("\n");
}
for(i=1;i<=n/2-1;i++){
    for(j=0;j<n/2-i;j++)
        printf("%c",c);
    for(j=0;j<i;j++)
        printf(".");
    for(j=0;j<i;j++)
        printf(".");
    for(j=0;j<n/2-i;j++)
        printf("%c",c);

printf("\n");
}


return 0;
}
/*
for(i=1;i<=n/2;i++){
    for(j=1;j<=n/2-i;j++){

    }
}
*/
/*
n=2
-*-
***
-*-

n=3
--*--
-***-
*****
-***-
--*--

n=4
---*---
--***--
-*****-
*******
-*****-
--***--
---*---
*/
