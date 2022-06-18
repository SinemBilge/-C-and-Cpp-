#include <stdio.h>
int main()
{
    int a;
    scanf("%d\n", &a);
    printf("%d\n", a);
    int *ptr;
    ptr = &a;
    printf("%p\n", ptr);
    *ptr = *ptr + 5;
    printf("%d\n", *ptr);
    printf("%p\n", &a);
    return 0;
}