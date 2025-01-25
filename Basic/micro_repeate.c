#include <stdio.h>

// Macro definition
#define LIMIT 5

int main()
{    
   #define LIMIT 10

    // Print the value of macro defined
    printf("The value of LIMIT is %d",LIMIT);

    return 0;
}

/*
micro_repeate.c: In function ‘main’:
micro_repeate.c:8: warning: "LIMIT" redefined
    8 |    #define LIMIT 10
      |

  run code =The value of LIMIT is 10
*/
