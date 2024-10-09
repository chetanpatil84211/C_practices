#include<stdio.h>
#include<stdlib.h>

int main()
{
 
    int *ptr,*ptr1;
	int n,i;

	n=5;
	printf("Enter number of elements: %d\n",n);

	//Dynamically allocated memory using malloc()

	ptr=(int *)malloc(n*sizeof(int));

	//using calloc()

	ptr1=(int *)calloc(n,sizeof(int));

	//allocated or not

	 if(ptr==NULL || ptr1==NULL)
	  {
	   printf("Memory is not allocated.\n");
	   exit(0);
	  }
	  else
	  {
	   // Memory has been successfully allocated.
	    printf("Memory successfully allocated using malloc().\n");

		//free the memory
		free(ptr);
		printf("Malloc memory successfully freed. \n");
     
	     //memory has been successfully allocated

		 printf("Memory successfully allocated using calloc().\n");
        
		  free(ptr1);

		  printf("calloc memory successfully freed.\n");
		  }

		  return 0;
		  }






	    
