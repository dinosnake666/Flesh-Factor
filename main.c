#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int ft_eat_food(int hp);

int main (void)
{
	int day = 15;
	int hp = 100;
	while (day > 0 && day <= 21 && hp >= 0)
	{
		int	week;

		if (day % 7)
			week = (day / 7) + 1;
		else
			week = day / 7;

		printf("Week : %d\tDay : %d\tHP : %d\n", week, day, hp);
		day--;
		if (ft_eat_food(hp) != 0)
			hp += ft_eat_food(hp);
		else
		{
			hp -= 10;
			printf("You lost -10 HP out of hunger.\n");
		}

		if (hp <= 0)
		{
			printf("You died :(\n");
			break;
		}
	}
	printf("End of game.\n");


    return(0);
}
