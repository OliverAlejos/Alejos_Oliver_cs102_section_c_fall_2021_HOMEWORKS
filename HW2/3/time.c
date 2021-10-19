/*2 - (1 pt) Write a program to ask a user for an integer as the number of minutes,
and outputs the total hours and minutes (110 minutes = 1 hour 50 minutes). */

#include <stdio.h>
#include <stdlib.h>
#define Success 0


int main(void)
{
    int t, m, h;
    const int d = 60;
    
    printf("Give Me Some Minutes \n");
    scanf("%i", &t);
    
    h = (t/d);
    m = (t % d);
    
    printf("%i Hour(s), %i Minute(s).\n", h, m);
    return 0;
}
