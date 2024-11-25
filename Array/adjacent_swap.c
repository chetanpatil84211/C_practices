#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,60};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("array element is :%d\n",size);
    
     printf("Before swapping adjacent element : ");
    for(int i=0;i<size;i++)
       {
         printf("%d\t",arr[i]);
       }
       
       printf("\n");
    
    for(int i=0;i<size;i=i+2)
       {
           int temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
       }
       
       printf("After  Swapping adjacent element :");
       
       for(int i=0;i<size;i++)
        {
            printf("%d\t",arr[i]);
        }
        return 0;
}
