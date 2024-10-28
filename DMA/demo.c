#include<stdio.h>
#include<stdlib.h>

int main()
{
   int count;
   printf("Enter elements count : ");
   scanf("%d",&count);

   //allocate space inside memory of user enetered sie

   int *ptr=(int *)malloc(sizeof(int)*count);

   if(ptr==NULL)
    {
	 printf("malloc() is failed\n");
	 return -1;
	 }

	 //use allocated memory

    printf("Enter a array of elements : ");

	for(int i=0;i<count;i++)
	   {
	     printf("%d  elemets : ",i);
		 scanf("%d",&ptr[i]);
	   }

	   printf("Array : ");

	   for(int i=0;i<count;i++)
	      {
		    printf("%-4d",ptr[i]);
		  }


		  printf("\n");
    
	    //realse allocated memory
		
		free(ptr);
   
        return 0;

		}


