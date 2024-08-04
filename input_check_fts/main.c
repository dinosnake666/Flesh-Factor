#include <stdio.h>

int	ft_letter_check(char *str);

int	main(void)
{
	char	user_input[0];

	if (ft_letter_check(user_input))
		printf("Yes.\n");
	else
		printf("No.\n");
	return(0);
}
