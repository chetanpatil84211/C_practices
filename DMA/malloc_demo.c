#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    int *ptr;

	printf("Enter number of elements : \n");
	scanf("%d",&n);

	printf("Enter number of elements : %d\n",n);

	//Dynamically allocate memory using malloc()

	ptr=(int *)malloc(n*sizeof(int));

	//check if the memory has been successfully
	//allocated by malloc or not

	if(ptr==NULL)
	 {
	  printf("Memory not allocated.\n");
	  exit(0);
	  }
	  else
	  {
	  //memory has been successfully allocates
	  printf("Memory successfully allocated using mallo().\n");

	  for(i=0;i<n;++i)
	   {
	    ptr[i]=i+1;
	   }
   
      //print the elemets of array
       
	   printf("The elements of the array are: ");

	   for(i=0;i<n;++i)
	    {
		 printf("%d\t",ptr[i]);
		 }
         
		 }
		 return 0;

		 }














