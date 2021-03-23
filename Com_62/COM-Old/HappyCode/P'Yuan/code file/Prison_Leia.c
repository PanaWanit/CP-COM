#include<stdio.h>
int main(){
    int A,B,C,a,b,c,d,i,j;
    scanf("%d %d %d",&A,&B,&C);
    for(i=1;i<=100;i++){
        for(j=-100;j<=100;j++){
            if(j!=0&&A%i==0&&C%j==0){
            a=i,b=j,c=A/a,d=C/b;
            if(B==a*d+b*c){
                printf("%d %d %d %d",a,b,c,d);
                return 0;
            }
            }
        }
    }
    printf("No Solution");
}
/*
4 5 1
*/
