#include<stdio.h>
int main()
{
int x,n,i;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&x);
while(x){
    if(x>=1000)
        x-=1000,printf("M");
    else if(x>=900)
        x-=900,printf("CM");
    else if(x>=500)
        x-=500,printf("D");
    else if(x>=400)
        x-=400,printf("CD");
    else if(x>=100)
        x-=100,printf("C");
    else if(x>=90)
        x-=90,printf("XC");
    else if(x>=50)
        x-=50,printf("L");
    else if(x>=40)
        x-=40,printf("XL");
    else if(x>=10)
        x-=10,printf("X");
    else if(x>=9)
        x-=9,printf("IX");
    else if(x>=5)
        x-=5,printf("V");
    else if(x>=4)
        x-=4,printf("IV");
    else if(x>=1)
        x-=1,printf("I");



}
}
return 0;
}
