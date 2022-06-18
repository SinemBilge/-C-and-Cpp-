#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf\n", &x);
    scanf("%lf\n", &y);
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    printf("%p\n", ptr_one);
    printf("%p\n", ptr_two);
    printf("%p\n", ptr_three);
    return 0;
}