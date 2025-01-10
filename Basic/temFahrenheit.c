/* C Program to convert temperature from Celsius to 
 * Fahrenheit*/

#include<stdio.h>
float tempfer(float temp);

int main(void)
{
  float temp;
  printf("Enter a temperature:  ");
  scanf("%f",&temp);

  float fere=tempfer(temp);
  printf("fahrenheit=%f\n",fere);

  return 0;
 }

 float tempfer(float temp)
 {
   
    return ((temp*9.0/5.0)+32.0);
  }
