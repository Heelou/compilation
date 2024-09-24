#include <stdio.h>
#ifndef STATIC_FUNCTION_H_INCLUDED
#define STATIC_FUNCTION_H_INCLUDED

/* Declare inline function */
/* static inline int square(int num) */ 
static int square(const int num) 
{
    return num * num;
}

int Static_Function(void) 
{
    static int  j      = 1; /* Declare static variable */
    static int  choice = 1;
    const int   i      = 1;
    (void)printf("Square of %d is %d\n", i, square(i));    /* Use inline function */
    (void)printf("Static variable j is %d\n", j);    /* Use static variable */
    j++;
    choice++;
    switch (choice)     /* Use switch statement */
    {
    case 1:
        (void)printf("You chose option 1\n");
        break;
    case 2:
        (void)printf("You chose option 2\n");
        break;
    default:
        (void)printf("Invalid option\n");
    }
    return 0;
}
#endif /* STATIC_FUNCTION_H_INCLUDED */
