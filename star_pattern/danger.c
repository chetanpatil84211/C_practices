 #include <stdio.h>
 int main() 
 { 
     int n;
     printf("Enter a num\n");
     scanf("%d",&n);
       int a=n;
      for(int i=1;i<=n;i++)
          {  // int a=n;destroy varible
            for(int j=1;j<=n;j++)
             { 
              if(i==j||j==a)  
                printf("* ");
              else
                printf("  ");
              }
              a--;
             printf("\n");
          }
            printf("a is %d\n",a);
			return 0;
 }   

 /*if(i==j || i+j==n+1)
      printf("*");
	else
	  printf(" ");

	*/
