#include<stdio.h>
int highestMarks(int **ptr,int *size,int n);

int main(void)
{
  int *p[3],marks;

  int a[]={20,4,60,75,34};
  int b[]={81,22,11};
  int c[]={10,30,50,73,49,37,44};

  p[0]=a;
  p[1]=b;
  p[2]=c;

  int size[3]={5,3,7};

  marks=highestMarks(p,size,3);

  printf("marks=%d\n",marks);

  return 0;
  }

int highestMarks(int **ptr,int *size,int n)
   {  
     int max=0;
     for(int i=0;i<n;i++)
	   {
	     for(int j=0;j<size[i];j++)
		   {
		     if(max<ptr[i][j])
			  {
			    max=ptr[i][j];
			  }
			}
       }
	   return max;
	}







