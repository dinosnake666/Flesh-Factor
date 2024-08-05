#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct available_food {
  char *name;
  char *state;
  char *hp_change;
};

void ft_food(void)
{
    struct available_food encountered_food[] =
    {
        {"stew", "umami", "+20"},
        {"mushroom", "poisonous", "-5"},
        {"meat", "rotten", "-15"},
        {"bread", "stale", "+2"},
        {"GARLIC", "LEGENDARY", "+5000"},
    };
    
    srand(time(NULL) + 91028050);
    int chosen = rand() % 5;

    printf("You found [%s %s]. %s HP\n", encountered_food[chosen].state, encountered_food[chosen].name, encountered_food[chosen].hp_change);
}