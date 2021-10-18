/*
3 - (1 pt) Write a program that deliberately makes the following mistakes:
(a) print a floating-point number using the %d conversion;
(b) print an integer using the %f conversion; (c) print a character using the %d conversion.
*/

#include <stdio.h>

int main()
{
    float floatt, floattt;
    int integerr, integerrr;
    char cat;
    
    floatt = 1.1;
    integerrr = floatt;
    integerr = 1;
    floattt= integerr;
    cat = 'C';
    printf("%f converts to %d\n", floatt, integerrr);
    printf("%d converts to %f\n", integerr, floattt);
    printf("%c converts to %d\n", cat, cat);
    return 0;
}
