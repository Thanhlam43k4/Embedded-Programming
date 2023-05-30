#include<stdio.h>
#include "inc/add_two_num.h"
#include "inc/times_two_num.h"


int main()
{
    int a = 3,b = 5;
    printf("Sum of two number :%d\n",add_two_num(a,b));
    printf("Multiple of two number : %d\n",times_two_num(a,b));


}
