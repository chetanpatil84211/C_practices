#include<stdio.h>
int toggle_bit(int n,int position);

int main()
{
   
   int n,position;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter a Position : ");
    scanf("%d",&position);
    int r=toggle_bit(n,position);
    
    printf("Result is : %d\n",r);
}

 int toggle_bit(int n,int position)
  {
      return (n ^ (1<<position));
  }
