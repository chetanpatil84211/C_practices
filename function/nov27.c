#include<stdio.h>
int maxoffour(int a,int b,int c,int d);

int main()
{
  int a,b,c,d,ans;

  printf("Enter a four number : ");
  scanf("%d%d%d%d",&a,&b,&c,&d);

  printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);

  ans=maxoffour(a,b,c,d);

  printf("greatter number is :%d\n",ans);

  return 0;

 }

 int maxoffour(int a,int b,int c,int d)
   {
     if(a>b && a>c && a>d)
	   return a;
	  else if(b>a && b>c && b>d)
	     return b;
	  else if(c>a && c>b && c>d)
	     return c;
	  else
	     return d;
    }
