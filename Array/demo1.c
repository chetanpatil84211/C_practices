#include<stdio.h>

int main(void)
{
  char str1[10]="PG-DESD";
  char str2[10]="PG-DITISS";
  char str3[10]="PG-DMC";
  char str4[10]="PG-DBDA";

  char *str[4]={str1,str2,str3,str4};

  printf("Array : \n");

  for(int i=0;i<4;i++)
    {
	 printf(" %u[%s]\n",str[i],str[i]);
     }
	 printf("\n");

	 return 0;
	 }
/*

Array :
 3701402336[PG-DESD]
 3701402346[PG-DITISS]
 3701402356[PG-DMC]
 3701402366[PG-DBDA]
*/
