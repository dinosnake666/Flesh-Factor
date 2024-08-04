#include <stdio.h>

int	ft_letter_count(char *str);

int	ft_letter_check(char *str)
{
    do
    {
        printf("Enter [y / n] : ");
        scanf("%s", str);
    } while ((str[0] != 'n' && str[0] != 'y') || letter_count(str) != 1);

    if (str[0] == 'n')
	    return(0);
    else
	    return(1);
}
