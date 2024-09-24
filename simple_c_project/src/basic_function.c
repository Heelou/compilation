#include <stdio.h>
#include "../inc/Basic_Function.h"

#define print_scripts "This is the function from Extra_Function.c\n"

void print_function(void) 
{
    (void)printf( print_scripts );
}

void if_function(const int a, const int b) 
{
    const int act_a = a;
    const int act_b = b;

    if (act_a > act_b)
    {
        (void)printf("%d > %d\n", act_a, act_b);
    } else if (act_a < act_b) 
    {
        (void)printf("%d < %d\n", act_a, act_b);
    } else 
    {
        (void)printf("%d = %d\n", act_a, act_b);
    }
}

void for_function(const int c) 
{
    int i;
    for (i = 0; i < c; i++)
    {
        (void)printf("L %d\n", i);
    }
} 

void pointer_function(int * d, int * e) {
    const int temp = *d;
    *d = *e;
    *e = temp;
    (void)printf("S\n");
}
void main(void) {
    int             eg1          = 1;
    int         *   ptr_1        = &eg1;
    int             eg2          = 1;
    int         *   ptr_2        = &eg2;
    const int       val_for_func = 3;

    print_function();
    if_function(0,1);
    if_function(1,1);
    if_function(1,0);
    for_function(val_for_func);
    pointer_function(ptr_1, ptr_2);
    printf("BASIC FUNCTION!!!!!!!");
}
