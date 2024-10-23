//check number is prime or not

#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter a number : \n");
    scanf("%d",&num);
    
  for(i=2;i<num;i++)
  {
      if(num%i==0)
      {
          break;
      }
      
  }
  
  if(i==num)
  {
      printf("Number is prime\n");
  }
  else
  {
      printf("Number is not prime\n");
  }
    
      return 0;
}
