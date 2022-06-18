#include <stdio.h>
int main() {
double result;
int a = 5;
float b = 13.5;
result = a / b;
printf("The result is %lf\n", result); 
return 0;
}

// varibale b is not an integer 
// # should be put in front of the library 
// the result's datatype can be left as float then in the print function there should be %f
//In this case result's datatype changed into double so in printf function there should be %lf
