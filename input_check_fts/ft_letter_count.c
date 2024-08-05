#include <stdio.h>

int     ft_letter_count(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0' && str[counter] != ' ' && str[counter] != '\t' && str[counter] != '\v')
        counter++;
    return(counter);
}
