#include<stdio.h>
int sum(int p,int q);

int main()
{
    int a,b;
    printf("Enter a both number : \n");
    scanf("%d%d",&a,&b);
    
    int ans=sum(a,b);
    
    printf("answer is : %d\n",ans);
    
    return 0;
    
}
int sum(int p,int q)
 {
     return p+q;
 }
