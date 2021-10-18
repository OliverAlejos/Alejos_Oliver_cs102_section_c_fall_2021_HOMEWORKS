/*
Given an amount of US money in cents, compute the number of quarters,
dimes, nickels, and pennies needed to minimize the number of coins.
*/

#include <stdio.h>

int main()
{
    int money, quart, dimes, nick, penn;

    printf("Give me some Cents \n");
    scanf("%i", &money);

    if (money >= 25)
        {
            if (money % 2 ==0) {
            quart = money/25;
            printf("There are %i quarters", quart);
            }
            else (money % 2 !0) {
                
            }
        }
    else (money <25)
        {
        
        }
        
    /*printf("There are %i quarters, %i dimes\n, %i nickels, and %i pennies", quart, dimes, nick, penn)*/
    return 0;
}
