#include <stdio.h>

struct food {
  char *name;
  char *state;
  int hp_change;
};

int main() {
  struct food stew = {"stew", "umami", 20};
  struct food mushroom = {"mushroom", "poisonous", -5};
  struct food meat = {"meat", "rotten", -15};

  printf("You found [%s %s].\n", mushroom.state, mushroom.name);
  printf("You found [%s %s].\n", meat.state, meat.name);
  printf("You found [%s %s].\n", stew.state, stew.name);

  return (0);
}