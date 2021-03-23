/*
    TASK:
    AUTHOR: PeaTT~
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
#include<math.h>
int main()
{
    double x,y;
    scanf("%lf %lf",&x,&y);
    printf("Plus: %.2lf\n",x+y);
    printf("Minus: %.2lf\n",x-y);
    printf("Multiply: %.2lf\n",x*y);
    printf("Divide: %.2lf\n",x/y);
    printf("Modulo: %.2lf\n",fmod(x,y));
    printf("Power: %.2lf\n",pow(x,y));
    printf("Root: %.2lf\n",pow(x,1/y));

    return 0;
}
