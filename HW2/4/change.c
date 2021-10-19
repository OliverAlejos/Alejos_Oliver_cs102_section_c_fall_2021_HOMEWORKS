/*
4 - (2 pts) Given an amount of US money in cents, compute the number of quarters, dimes, nickels, 
and pennies needed to minimize the number of coins.
*/

#include <stdio.h>

int main()
{
    int m, q, d, n, p;
    
    printf("Give me some cents \n");
    scanf("%i", &m);
    
    if (m % 25 == 0)
        {
        q = m/25;
        printf("%i quarter(s)", q);  
        }
    else {
        if (m % 10 ==0)
            {
            d = m/10;
            printf("%i dimes", d);
            }
            else  if (m % 5 ==0){
            n = m/5;
            printf("%i nickels", n);}
                else {
                printf("%i pennies", m);}
    }
    return 0;
}
