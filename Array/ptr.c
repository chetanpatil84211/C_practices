#include<stdio.h>

int main()
{
  float marks[5];//marks -base address of array-&marks[0]-float *

  float *ptr=marks;

  //float *ptr=&marks[0];
  //marks++;  //error

  printf("Enter array elements : \n");
  for(int i=0;i<5;i++)
    {
	  printf("marks[%d] : ",i);
	  scanf("%f",(ptr+i));
	 }
	 //&ptr[i]=&*(ptr+i);

	 printf("Array :  ");

    for(int i=0;i<5;i++)
	{
	  printf("%f\t",ptr[i]);

	}


	return 0;
	}















