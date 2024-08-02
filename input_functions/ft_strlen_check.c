#include <stdio.h>

int str_letters(char *str)
{
    int letter_count;

    letter_count = 0;
    while (str[letter_count] != '\0')
        letter_count++;
    return(letter_count);
}

char *ft_letter_check(char *str)
{
    do
    {
        printf("Enter [y] : ");
        scanf("%s", str);
    } while ((str[0] != 'n' && str[0] != 'y') || str_letters(str) != 1);
    
    return(str);
}

int main(void)
{
    char test[0];
    printf("Valid input : %s", ft_letter_check(test));
    return(0);
}