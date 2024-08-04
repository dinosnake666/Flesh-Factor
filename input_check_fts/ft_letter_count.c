#include <stdio.h>

int     ft_letter_count(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
        counter++;
    return(counter);
}
