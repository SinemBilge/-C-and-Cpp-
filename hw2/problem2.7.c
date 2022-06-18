#include <stdio.h>
int main()
{
    int i = 8;
    for (i=8; i>=4; i--)
    {
         printf("i is %d\n", i);
    }
    printf("That’s it.\n");
    return 0;
}

//or

#include <stdio.h>
int main()
{
    int i = 8;
    while (i >= 4)
    {
        printf("i is %d\n", i);
        i--;
    }

    printf("That’s it.\n");
    return 0;
}