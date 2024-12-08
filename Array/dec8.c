#include<stdio.h>
int main()
{
    int arr[9];

    int size=sizeof(arr)/sizeof(arr[0]);
    printf("size=%d\n",size);

    for(int i=0;i<size;i++)
     {
         printf("arr[%d]: ",i);
         scanf("%d",&arr[i]);
     }

     printf("Array is : \n");

     for(int i=0;i<size;i++)
      {
          printf("%d\t",arr[i]);
      }

      int j,temp;
       temp=arr[0];

      for( j=0;j<size-1;j++)
        {
              
           arr[j]=arr[j+1];
          
        }
        arr[j]=temp;

       printf("\nNew array: \n");

       for(int i=0;i<size;i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n");
        return 0;
}
/*
Array is :
1	2	3	4	5	6	7	8	9
New array:
2	3	4	5	6	7	8	9	1
*/
