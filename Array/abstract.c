#include<stdio.h>
#include<stdlib.h>
 
  struct myArray {
                    int total_Size;
					int used_Size;
					int *ptr;
				 };

  void createArray(struct myArray *a,int tSize,int uSize)
    {
      (*a).total_Size=tSize;
      (*a).used_Size=uSize;
      (*a).ptr=(int *)malloc(tSize*sizeof(int));
    }
 
  void show(struct myArray *a)
    {
     for(int i=0;i<a->used_Size;i++)
	    {
		 printf("%d\n",(a->ptr)[i]);
		}
	}
   
    void setVal(struct myArray *a)
	 {
	   int n;
	   for(int i=0;i<a->used_Size;i++)
	     {
		  printf("enter %d :",i);
		  scanf("%d",&n);
		  (a->ptr)[i]=n;
		 }
	 }

	 int main()
	  {
	    struct myArray marks;
		createArray(&marks,10,2);
		printf("We are running  setval now\n");
		setVal(&marks);
		printf("We are runnin show now\n");
		show(&marks);


		return 0;
	}
		   
/*
We are running  setval now
enter 0 :14
enter 1 :15
We are runnin show now
14
15
*/
  
     
