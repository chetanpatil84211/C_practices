#include<stdio.h>
void  roted(int arr[],int size);

int main()
{
   int arr[]={1,2,3,4,5,6,7};
   int size=sizeof(arr)/sizeof(arr[0]);
   printf("Size is %d\n",size);
   
   roted(arr,size);
   return 0;
}
void roted(int arr[],int size)
   { 
     
       int temp=arr[size-1];//last element
       printf("temp=%d\n",temp);
        int j;
       for( j=size-1;j>0;j--)
        { 
            
           arr[j]=arr[j-1];
        }
         arr[j]=temp;
         for(int k=0;k<size;k++)
        { 
            printf("%d\t",arr[k]);
            
        }
}
  
