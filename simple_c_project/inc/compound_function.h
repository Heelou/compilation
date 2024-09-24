

#ifndef COMPOUND_FUNCTION_H_INCLUDED
#define COMPOUND_FUNCTION_H_INCLUDED
#include "../inc/Basic_Function.h"

int glob_int = 0;

void compare_function(void) 
{
    int local_int = 0;
    if_function(glob_int, local_int);
}

int add_function (const int a, const int b)
{
    const int act_a = a;
    const int act_b = b;
    const int sum = act_a + act_b;
    return sum;
}

int multiply_function (const int c, const int d) 
{
    const int local_a = 0;
    const int local_b = 0;
    const int local_c = c;
    const int local_d = d;
    const int add = add_function(local_a, local_b);
    const int mul = add * local_c * local_d;
    return mul;
}
#endif /* BASIC_FUNCTION_H_INCLUDED */
