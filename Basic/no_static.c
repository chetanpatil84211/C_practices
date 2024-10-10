#include<stdio.h>

/*int fun()
{
 int count=0;
 count++;
 return count;
}


 int main()
  {
   printf("%d\t",fun());
   printf("%d\t",fun());

    return 0;
  }

//  1 1
*/

#include<stdio.h>
int initializer(void)
{
    return 50;
}

int main()
{
    static int i = initializer();
    printf(" value of i = %d", i);
    getchar();
    return 0;
}//initializer element is not constant
//   30 |     static int i = initializer();

