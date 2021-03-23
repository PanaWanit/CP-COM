#include <stdio.h>
int wheel[110],score[110],person[30];
int main()
{
    int i,k,n,now=0,nowdice,l,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&score[i]);
    for(i=0;i<n;i++){
        scanf("%d",&nowdice);
        for(j=0;j<=nowdice;j++){
            if(wheel[now%n]==1) j--;
            now++;
            }
            now--;
        //while(wheel[now%n]==1) now++;
        person[ i%k ] += score[now%n];
        wheel[now%n]=1;
    }
    for(i=0;i<k;i++)
        printf("%d\n",person[i]);
    return 0;
}
/*
5 3
3
5
2
4
1
3
5
1
2
1
*/
