#include<stdio.h>
int main()
{
  char str[]="Lucknow";
  printf("%s\n",str);

  char *p=str;
  p=p+3;//know
  p[3]='t';//knot

  printf("%s   %s\n",str,p);//Lucknot   knot

  return 0;
  }
/*
Lucknow
Lucknot   knot
*/
