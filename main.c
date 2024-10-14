#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <limits.h>

char    ft_add(unsigned int i, char c)
{
    (void)i;
    (void)c;
    return ('a');
}

void    ft_vadd(unsigned int i, char *s)
{
    (void)i;
    *s = 'a';
}

int main(void)
{
    printf("\n:ft_split:\n");
    char    **_split;
    _split = ft_split("1,2,3,4,5,6,78", ',');
    printf("1: %s\n", _split[0]);
    printf("2: %s\n", _split[1]);
    printf("3: %s\n", _split[5]);
    printf("4: %s\n", _split[8]);
    _split = ft_split("", ',');
    printf("5: %s\n", _split[0]);
    _split = ft_split("1,2,3,4,5,6,78", 0);
    printf("6: %s\n", _split[0]);
    _split = ft_split("", 0);
    printf("7: %s\n", _split[0]);
    _split = ft_split(ft_strdup("a b c"), ' ');
    printf("8: %s\n", _split[0]);

    printf("\n:ft_itoa:\n");
    printf("1: %s\n", ft_itoa(1000));
    printf("2: %s\n", ft_itoa(INT_MAX));
    printf("3: %s\n", ft_itoa(INT_MIN));
    printf("4: %s\n", ft_itoa(0));
    printf("5: %s\n", ft_itoa(-42));
}