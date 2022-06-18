#include <stdio.h>
int main(){
    int week, day, hour;
    printf("How many weeks, days and hours?");
    scanf("%d\n",&week);
    scanf("%d\n",&day);
    scanf("%d\n",&hour);
    printf("Total hours= %d\n",(week*7*24) + (day*24) + hour);

}