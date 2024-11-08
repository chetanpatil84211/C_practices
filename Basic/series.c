//Enter a  n : 5
//1	3	6	10	15


#include<stdio.h>
int main()
{
    int n;
    printf("Enter a  n : ");
    scanf("%d",&n);
     int sum=0;
    for(int i=1;i<=n;i++)
     {
          sum=sum+i;
         printf("%d\t",sum);
         
     }
     
     
     
     return 0;
}
