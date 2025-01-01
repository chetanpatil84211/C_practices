/*#include<stdio.h>
int main()
{
    int basic;
    float hra;

    printf("Enter a values:\n");
    scanf("%d:%f",&basic,&hra);
    printf("basic=%d  hra:%f\n",basic,hra);

    return 0;
}
Enter a values:
1500:200.50
basic=1500  hra:200.500000
*/
#include<stdio.h>

int main(void)
{
   int day,month,year;

   printf("Enter day month and year: ");
   scanf("%d-%d-%d",&day,&month,&year);

   printf("day=%d month=%d  year=%d\n",day,month,year);

   return 0;
  }

/*
Enter day month and year: 31-12-2024
day=31 month=12  year=2024
*/

