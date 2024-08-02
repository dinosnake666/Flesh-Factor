#include <stdio.h>

int str_letters(char *str)
{
    int letter_count;

    letter_count = 0;
    while (str[letter_count] != '\0')
        letter_count++;
    return(letter_count);
}

char *ft_strlen_check(void)
{
    char str[0];
    do
    {
        //printf("Enter a single character : ");
        scanf("%s", str);
    } while (str_letters(str) != 1);
    
    return(str);
}