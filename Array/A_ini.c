#include<stdio.h>
int main()
{

/*
  int arr[3];

  printf("Enter  a phy : \n");
  scanf("%d",&arr[0]);

  printf("Enter a math : \n");
  scanf("%d",&arr[1]);

  printf("Enter a che : \n");
  scanf("%d",&arr[2]);

  printf("%d %d %d\n",arr[0],arr[1],arr[2]);
*/

  int marks[]={97,98,99,100,110};
 
   int length=sizeof(marks)/sizeof(marks[0]);

  for(int i=0;i<length;i++)
   {
     printf("marks[%d]=%d\n",i,marks[i]);
	}

 
  return 0;
  }
