/*
1 - (1 pt) Write a program that prints the perimeter of a rectangle given its height and width. 
Ask the user to input the two dimensions. Do you remember the formula for perimeter of a rectangle
*/



#include <stdio.h>
#include <stdlib.h>
#define Success 0
int main(void)
{
    int l, w;
    int Perimeter;

    printf("INPUT LENGTH AND WIDTH: \n");
    scanf("%i %i", &l, &w);
    Perimeter = l+l+w+w;
    printf("THE PERIMETER IS: %i", Perimeter);
    
    return 0;
}
