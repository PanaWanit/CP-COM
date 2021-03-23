#include<stdio.h>
#include<string.h>
char a[200];
char rot(char b){
    printf("R");
    if(b=='N') return 'E';
    if(b=='E') return 'S';
    if(b=='S') return 'W';
    if(b=='W') return 'N';
}
int main()
{
    int i,len;
  char tid='N';
  scanf(" %s",a);
  len = strlen(a);
  for(i=0;i<len;i++)
  {
      if(a[i]=='N'){
        while(tid!='N')
            tid = rot(tid);
        printf("F");
      }

    else if(a[i]=='S'){
        while(tid!='S')
            tid = rot(tid);
        printf("F");
    }

    else if(a[i]=='E'){
        while(tid!='E')
            tid = rot(tid);
        printf("F");
    }
    else if(a[i]=='W'){
        while(tid!='W')
            tid = rot(tid);
        printf("F");
    }
    else if(a[i]=='Z'){
        while(tid!='N')
            tid = 'N';
        printf("Z");
    }


  }
      return 0;
}
