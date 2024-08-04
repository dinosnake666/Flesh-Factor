#include <stdio.h>

int     letter_count(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
        counter++;
    return(counter);
}
