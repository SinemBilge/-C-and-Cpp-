#include <stdio.h>
int main()
{
    int n;
    while(1){
        scanf("%d",&n);
        if (n<=0)
            printf("Write another value:\n");
        else
            break;
    }

    printf("1 day = 24 hours\n");
    int i;
    for(i=2; i<=n; i++)
        printf("%d days = %d hours\n", i, i*24);
    return 0;
}