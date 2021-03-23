#include<stdio.h>
#include<string.h>

int main()
{
	int N,M,cnt=0,j,i;
	scanf("%d %d",&N,&M);
	char text[N+5],key[M+5];
	scanf("%s \n %s",text,key);
	for(i=0;i<=N-M+1;++i)
	{

		for(j=0;j<=M-1;++j)
		{
		    printf("[%c] (%c)\n",key[j],text[i+j]);
			if(key[j] != text[i+j])
				break;
		}
		if(j == M)
			cnt++,printf(" {%d}\n",cnt);
	}
	printf("%d\n", cnt);
}
