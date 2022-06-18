#include <stdio.h>
int main() {
double result; 
result = (3 + 1) / 5.0;
printf("The value of 4/5 is %lf\n", result); 
return 0;
}

// The result of (3+1)/5 is shown as 0.000000 
// The values are written as integers but the datatype of variable "result" is double 
//Turning one of the vaalues into a floating number solved the issue