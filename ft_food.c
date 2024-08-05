#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct available_food {
  char  *name;
  char  *state;
  int   hp_change;
};

int ft_food(void)
{
    struct available_food encountered_food[] = //this array of struct var allows to choose randomly;
    {
        {"stew", "hot", 20},
        {"mushroom", "poisonous", -5},
        {"meat", "rotten", -15},
        {"bread", "stale", 2},
        {"GARLIC", "LEGENDARY", 5000},
    };
    

    srand(time(NULL) + 91028050);//silly number :)
    int chosen = rand() % 5;

    printf("You found [%s %s].\n", encountered_food[chosen].state, encountered_food[chosen].name);
    return(encountered_food[chosen].hp_change);
}