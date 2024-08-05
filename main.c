#include <stdio.h>
#include <stdlib.h>

void	ft_time(int day);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return(0);
	if (argv[1][0] == '\0')
		return(0);
	ft_time(atoi(argv[1]));
	return (0);
}
