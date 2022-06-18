#include <stdio.h>
int main () {
    char ch;
    
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    { 
        printf("%c is a letter\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit\n", ch);
    }
    else /*else some other symbol */
    { 
        printf("%c is some other symbol\n", ch);
    }
    return 0;
}