#include <stdio.h>

int main()
{
    int day;
    int hp;
    int food;
    char    eat;
    int eat_flag;

    day = 7;
    hp = 90;
    food = 4;
    eat_flag = 0;
    
    while (day >= 0 && hp > 0)
    {
        printf("Current day : %d\t\t", day);
        printf("Current HP : %d\n", hp);
        if (food <= 0)
            printf("There is no food for today.\n");
        else if (food > 0)
        {
            printf("There is %d amount of food to eat.\n", food);
            
            loop:  //user input validation
            printf("Do you want to eat ? [y/n]\t");
            scanf("%s", &eat);

            while (eat_flag == 0 && getchar() != '\n');
            if (eat != 'y' && eat != 'n')
            {
                printf("Maybe you didn't understand me well...\n");
                goto loop; //God forgive me for this horror
            }
            else if (eat == 'y')
                eat_flag = 1;
            else if (eat == 'n')
                eat_flag = 2;
        }
        day--;
        if (eat_flag == 1 && day > 0)
        {
            if (hp < 100)
                hp += 10;
            food--;
            printf("You ate food.\n Current HP : %d\t\t Current amount of food : %d\n", hp, food);
            eat_flag = 0; //reset flag
        }
        else if (day > 0)
        {
            hp -= 15;
            printf("You didn't eat... Maybe tomorrow.\n");
            eat_flag = 0; //reset flag
        }
    }
    printf("\n\n");
    if (hp <= 0)
        printf("\t\nYou died :(\n");
    else
        printf("\t\nYAY YOU SURVIVED :D\n");
    return(0);
}