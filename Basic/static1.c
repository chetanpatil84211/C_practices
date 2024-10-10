#include<stdio.h>
int main()
{
    static int i = 50;
    printf(" value of i = %d", i);
    getchar();
    return 0;

}
//value of i = 50
/*
The reason for this is simple: All objects with static 
storage duration must be initialized 
(set to their initial values) before 
execution of main() starts. So a value 
which is not known at translation time 
cannot be used for initialization of 
static variables. */
