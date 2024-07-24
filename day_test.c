#include <stdio.h>

int    main(void)
{
    int    day;
    int    bread;
    char    eat;
    int    flag;
    unsigned int    hp;

    day = 10;
    bread = 10;
    hp = 100;
    while (day > 0)
    {
        printf("Day : %d\n", day);
        day--;
        while (hp != 0)
        {
            printf("Do you want to eat bread ? [y/n] : ");
            scanf("%c", &eat);
            if (eat == 'y')
            {
                bread--;
                printf("You consumed bread.\tRemaining bread : %d\n", bread);
                if (hp < 100)
                    hp = hp + 10;
                printf("Current hp : %u\n", hp);
            }
            else if (eat == 'n')
            {
                hp = hp - 10;
                printf("You didn't eat bread... maybe for later.\n");
                printf("Remaining bread : %d\n", bread);
                printf("Current hp : %u\n", hp);
            }
            /*else 
            {
                printf("You little prankster, I'm going to sell all your data since you're SO smart...\n");
                return(0);
            }*/
        }
    }
        if (day == 0)
        {
            printf("Day : %d\tThis week has ended.\n", day);
        }
        return(0);
    
}