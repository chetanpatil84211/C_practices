#include<stdio.h>
#include<stdlib.h>

int main()
 {
   //Take size of array from user

   int count;
   printf("Enter a element count : ");
   scanf("%d",&count);

   //allocated space inside memory of user entered size

   int *ptr=(int *)calloc(count,sizeof(int));

   if(ptr==NULL)
    {
	  printf("calloc() is failed\n");
	  return -1;
	 }

	 //use allocated memory

	 printf("Enter array elements : ");

	 for(int i=0;i<count;i++)
	    {
		  printf("%d elements : ",i);
		  scanf("%d",&ptr[i]);
		 }

		 printf("Array : ");
		  
	  for(int i=0;i<count;i++)
	    {
		  printf("%-4d",ptr[i]);
		 }

		printf("\n");


     //release allocated memory
		free(ptr);


		return 0;
 }
		  
