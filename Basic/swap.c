/*// Swap using Three Variable

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter a both Number\n");
    scanf("%d%d",&a,&b);
    printf("Before Swap a=%d  b=%d\n",a,b);
    
    c=a;
    a=b;
    b=c;
    
  printf("After Swap  a=%d  b=%d\n",a,b);
    
    
    return 0;
}
-----------------------------------------------------------------
*/

/*
----------------------------------------------------------------------

//swap using two variable

#include<stdio.h>

int main()

{
  int a,b;// 10 20

  printf("Enter a both Number : \n");
  scanf("%d%d",&a,&b);
  printf("Before Swap a=%d and b=%d \n",a,b);

  a=a+b;  //30
  b=a-b;  //10
  a=a-b;  //20

  printf("After swap a=%d  and b=%d \n",a,b);


  return 0;

  }

-------------------------------------------------------------
*/


/*
----------------------------------------------------------------

//Swap Using Pointer

#include<stdio.h>
void swap(int *p,int *q);

int main()
{
  int a,b;
  printf("Enter a number : ");
  scanf("%d%d",&a,&b);

  printf("Before swap a=%d and b=%d\n",a,b);
  
  swap(&a,&b);

  printf("After swap  a=%d and b=%d\n",a,b);

  return 0;
  }

 void swap(int *p,int *q)
 {
   int temp;

   temp=*p;
   *p=*q;
   *q=temp;

   printf(" inside function %d and %d \n",*p,*q);

   }

//Before swap a=4 and b=6
// inside function 6 and 4 
//After swap  a=6 and b=4

-------------------------------------------------------------
*/

/*-------------------------------------------------------------
//swap using (divide and Multiplication)

#include<stdio.h>

int main()
{
   int a,b;

   printf("Enter a both number ");
   scanf("%d%d",&a,&b);
   printf("Before swap a=%d  and  b=%d\n",a,b);

   a=a*b;
   b=a/b;
   a=a/b;

   printf("After swap a=%d  and  b=%d\n",a,b);

   return 0;

   }

------------------------------------------------------------------
*/

//Swap using bitwise

#include<stdio.h>

int main()
{
  int a,b;
  printf("Enter a both number : ");
  scanf("%d%d",&a,&b);
  printf(" Before Swap a=%d  and  b=%d\n",a,b);

   a=a^b;
   b=a^b;
   a=a^b;

   printf(" After Swap a=%d  and  b=%d\n",a,b);

   return 0;
   }


/*

Enter a both number : 10  20
 Before Swap a=10  and  b=20
 After Swap a=20  and  b=10

*/














