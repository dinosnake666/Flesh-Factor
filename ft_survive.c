#include <stdio.h>

void ft_survive(int day)
{
    while (day > 0 && day <= 10 )
    {
        int food_ration;

        printf("Current day : %d\n", day);

        food_ration = day - 3;
        if (food_ration > 0)
            printf("Amount of food : %d\n\n", food_ration);
        else
            printf("There's no more food today\n\n");
        day--;
    }
    printf("End of game.\n");
}