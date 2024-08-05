#include <stdio.h>

void	ft_time(int day)
{
	while (day > 0)
	{
		int	week;

		if (day % 7)
			week = (day / 7) + 1;
		else
			week = day / 7;
		printf("Week : %d\tDay : %d\n", week, day);
		day--;
	}
	printf("End of game.\n");
}
