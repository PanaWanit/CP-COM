#include<stdio.h>

int main(){
int z,x,c,v,i;
int a1=z-x;
int a2=x-c;
int a3=c-v;
int a4=v-z;

scanf("%d %d %d %d",&z,&x,&c,&v);
printf("%d\t%d\t%d\t%d\t\n",z,x,c,v);
while(z!=0&&x!=0&&c!=0&&v!=0){

    printf("%d \t",abs(a1));z=abs(a1);
    printf("%d \t",abs(a2));x=abs(a2);
    printf("%d \t",abs(a3));c=abs(a3);
    printf("%d \n",abs(a4));v=abs(a4);
    i++;
}
printf("\n %d",i);
return 0;
}
