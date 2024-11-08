//Print natural number

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++)
     {
         printf("%d\t",i);
         
     }
     
     printf("\n");
     
     int i=1;
     while(i<=num)
      {
          printf("%d\t",i);
          i++;
      }
      printf("\n");
      
       int j=1;
      do{
          //int j=1;  //error 'j' undeclared (first use in this function)
          printf("%d\t",j);
          j++;
      }while(j<=num);
     
     return 0;
}
