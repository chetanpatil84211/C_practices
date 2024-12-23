#include<stdio.h>
struct Time{
              int hr,min,sec;
			};

void setTime(struct Time *p,int x,int y,int z)
   {
     p->hr=x;
	 p->min=y;
	 p->sec=z;

    }

int main()
{
    struct Time t1;
    printf("hr:%d min:%d sec:%d\n",t1.hr,t1.min,t1.sec);
    setTime(&t1,3,40,30);

     printf("hr:%d min:%d  sec:%d\n",t1.hr,t1.min,t1.sec);
     return 0;
}
