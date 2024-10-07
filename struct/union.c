#include<stdio.h>
union abc{
           int a;
		   char b;
		   float c;
		   };
int main()
{
  union abc t;

  t.a=1;
  printf("int :%d\n",t.a);

 printf("--------------------\n");
  t.b='A';
  printf("char :%c\n",t.b);
  printf("int : %d\n",t.a);
 
 printf("------------------\n");
  t.c=88.43;
  printf("float :%f\n",t.c);
  printf("char : %c\n",t.b);
  printf("int : %d\n",t.a);
 
 printf("---------------\n");
 printf("%d %c %f\n",t.a,t.b,t.c);
  
printf("Size of =%ld\n",sizeof(union abc));
printf("Size of =%ld\n",sizeof(t));



return 0;
}
