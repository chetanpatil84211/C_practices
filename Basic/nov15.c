#include<stdio.h>
#include<stdlib.h>
int main()
 {
  int x,r,l,b,n1,n2,n3,av,ar;
  float a;
  while(1)//true value (any none zero value loop not be end 
 {
  printf("\n1.area of circle");
  printf("\n2.Area of rectangular");
  printf("\n3.Average of Three number");
  printf("\n4.Exit");
  printf("\n\nEnter your choice : ");
  scanf("%d",&x);
  
  switch(x)
   {
     case 1 : printf("Enter a radius of circle : ");
	          scanf("%d",&r);
			  a=3.14*r*r;
			  printf("Area is %f\n",a);
			  break;
	case 2 : printf("Enter a lenth and breath of ractangular : ");
	         scanf("%d%d",&l,&b);
			 ar=l*b;
			 printf("%d\n",ar);
			 break;
	case 3 : printf("Enter a three number : ");
	        scanf("%d%d%d",&n1,&n2,&n3);
			av=(n1+n2+n3)/3.0;
			printf("Average is %d\n",av);
			break;
	case 4 : 
	          exit(0);//work end of program
	default : printf("Invalid number\n");

	}//end of switch
	}//end of while

	return 0;
	}

