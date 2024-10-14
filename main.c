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
    printf("\nft_strlen:\n");
    printf("1: %s\n", ft_strlen("renato") == 6 ? "PASS" : "ERROR");
    printf("2: %s\n", ft_strlen("") == 0 ? "PASS" : "ERROR");
    printf("3: %s\n", ft_strlen("renato") != 7 ? "PASS" : "ERROR");
    printf("4: %s\n", ft_strlen("42") != 1 ? "PASS" : "ERROR");

    printf("\nft_memcpy:\n");
    char    _memcpy[30];
    printf("1: %s\n", (char *)ft_memcpy(_memcpy, "123456", 3));
    printf("2: %s\n", (char *)ft_memcpy(_memcpy, "123456", 6));
    ft_memset(_memcpy, 'a', 10);
    printf("3: %s\n", (char *)ft_memcpy(_memcpy, "123456", 3));

    printf("\nft_memset:\n");
    char    _memset[30];
    ft_memset(_memset, 'a', 10);
    printf("1: %s\n", _memset);
    ft_memset(_memset, 0, 10);
    printf("2: %s\n", _memset);
    ft_memset(_memset, '2', 20);
    printf("3: %s\n", _memset);

    printf("\nft_bzero:\n");
    char    _bzero[30];
    ft_memset(_bzero, 'a', 10);
    ft_bzero(_bzero, 10);
    printf("1: %s\n", _bzero[0] == '\0' ? "PASS": "ERROR");

    printf("\nft_memmove:\n");
    char    _memmove[30] = "adoleta lepeti";
    ft_memmove(_memmove + 5, _memmove, 5);
    printf("1: %s\n", _memmove);

    printf("\nft_memchr:\n");
    char    *_memchr = "12345";
    printf("1: %s\n", ((char *)ft_memchr(_memchr, '4', 5)));

    printf("\nft_memcmp:\n");
    char    *_memcmp = "123456";
    printf("1: %s\n", ft_memcmp(_memcmp, "345", 6) != 0 ? "PASS": "ERROR");

    printf("\nft_isalnum:\n");
    printf("1: %s, %s\n", ft_isalnum('1') == 1 ? "PASS": "ERROR", ft_isalnum('~') != 1 ? "PASS": "ERROR");

    printf("\nft_isalpha:\n");
    printf("1: %s, %s\n", ft_isalpha('a') == 1 ? "PASS": "ERROR", ft_isalpha('1') != 1 ? "PASS": "ERROR");

    printf("\nft_isascii:\n");
    printf("1: %s, %s\n", ft_isascii(0) == 1 ? "PASS": "ERROR", ft_isascii(127) == 1 ? "PASS": "ERROR");

    printf("\nft_isdigit:\n");
    printf("1: %s, %s\n", ft_isdigit('0') == 1 ? "PASS": "ERROR", ft_isdigit('9') == 1 ? "PASS": "ERROR");

    printf("\nft_isprint:\n");
    printf("1: %s, %s\n", ft_isprint(32) == 1 ? "PASS": "ERROR", ft_isprint(126) == 1 ? "PASS": "ERROR");

    printf("\nft_toupper:\n");
    printf("1: %c\n", ft_toupper('a'));
    printf("2: %c\n", ft_toupper('B'));
    printf("3: %c\n", ft_toupper('!'));
    printf("4: %c\n", ft_toupper('9'));
    printf("5: %c\n", ft_toupper('s'));
    printf("6: %c\n", ft_toupper('~'));
    printf("7: %c\n", ft_toupper('a' + 256));

    printf("\nft_tolower:\n");
    printf("1: %c\n", ft_tolower('a'));
    printf("2: %c\n", ft_tolower('B'));
    printf("3: %c\n", ft_tolower('!'));
    printf("4: %c\n", ft_tolower('9'));
    printf("5: %c\n", ft_tolower('s'));
    printf("6: %c\n", ft_tolower('~'));
    printf("7: %c\n", ft_tolower('a' + 256));

    printf("\nft_strchr:\n");
    printf("1: %s\n", ft_strchr("abcde", 'c'));
    printf("2: %s\n", ft_strchr("abcde", 0));

    printf("\nft_strrchr:\n");
    printf("1: %s\n", ft_strrchr("abcde", 'c'));
    printf("2: %s\n", ft_strrchr("abcde", 0));

    printf("\nft_strlcat:\n");
    char    _strlcat[11];
    ft_memset(_strlcat, 0, 11);
    ft_memset(_strlcat, 'a', 10);
    strlcat(_strlcat, "bdc", 10);
    printf("1: %s\n", _strlcat);
    ft_memset(_strlcat, 0, 10);
    ft_strlcat(_strlcat, "123456", 5);
    printf("2: %s\n", _strlcat);

    printf("\n:ft_strlcpy:\n");
    char    _strlcpy[11];
    ft_memset(_strlcpy, 0, 11);
    ft_strlcpy(_strlcpy, "bdc", 10);
    printf("1: %s\n", _strlcpy);
    ft_memset(_strlcpy, 0, 11);
    ft_strlcpy(_strlcpy, "123456", 5);
    printf("2: %s\n", _strlcpy);

    printf("\n:ft_atoi:\n");
    int _atoi = ft_atoi("--42");
    printf("1: %d, %s\n", _atoi, _atoi == 0 ? "PASS": "ERROR");
    _atoi = ft_atoi("0");
    printf("2: %d, %s\n", _atoi, _atoi == 0 ? "PASS": "ERROR");
    _atoi = ft_atoi("++42");
    printf("3: %d, %s\n", _atoi, _atoi == 0 ? "PASS": "ERROR");
    _atoi = ft_atoi("-+42");
    printf("4: %d, %s\n", _atoi, _atoi == 0 ? "PASS": "ERROR");
    _atoi = ft_atoi("42");
    printf("5: %d, %s\n", _atoi, _atoi == 42 ? "PASS": "ERROR");
    _atoi = ft_atoi("");
    printf("6: %d, %s\n", _atoi, _atoi == 0 ? "PASS": "ERROR");
    _atoi = ft_atoi("-42");
    printf("7: %d, %s\n", _atoi, _atoi == -42 ? "PASS": "ERROR");
    
    printf("\n:ft_strnstr:\n");
    char *_strnstr = ft_strnstr("este teste 42", "teste", 100);
    printf("1: %s\n", _strnstr);
    _strnstr = ft_strnstr("este teste 42", "", 100);
    printf("2: %s\n", _strnstr);
    _strnstr = ft_strnstr("este teste 42", "teste", 0);
    printf("3: %s\n", _strnstr);

    printf("\n:ft_strncmp:\n");
    int _strncmp = ft_strncmp("teste", "teste", 100);
    printf("1: %s\n", _strncmp == 0 ? "PASS": "ERROR");
    _strncmp = ft_strncmp("teste 42", "teste", 100);
    printf("2: %s\n", _strncmp != 0 ? "PASS": "ERROR");
    _strncmp = ft_strncmp("teste", "", 10);
    printf("3: %s\n", _strncmp != 0 ? "PASS": "ERROR");
    _strncmp = ft_strncmp("", "teste", 100);
    printf("4: %s\n", _strncmp != 0 ? "PASS": "ERROR");
    _strncmp = ft_strncmp("teste", "teste", 0);
    printf("5: %s\n", _strncmp == 0 ? "PASS": "ERROR");
    _strncmp = ft_strncmp("", "", 0);
    printf("6: %s\n", _strncmp == 0 ? "PASS": "ERROR");

    printf("\n:ft_strdup:\n");
    char *_strdup = ft_strdup("teste");
    printf("1: %s\n", _strdup[0] != 0 ? "PASS": "ERROR");
    _strdup = ft_strdup("");
    printf("2: %s\n", _strdup[0] == 0 ? "PASS": "ERROR");
    //_strdup = ft_strdup(NULL);
    //printf("3: %s\n", _strdup == NULL ? "PASS": "ERROR");
    
    printf("\n:ft_substr:\n");
    char *_substr = ft_substr("teste", 1, 3);
    printf("1: %s\n", _substr);
    _substr = ft_substr("teste", 4, 10);
    printf("2: %s\n", _substr);
    _substr = ft_substr("teste", 0, 10);
    printf("3: %s\n", _substr);
    _substr = ft_substr("teste", 0, 0);
    printf("4: %s\n", _substr);
    _substr = ft_substr("teste", 0, -1);
    printf("5: %s\n", _substr);

    printf("\n:ft_strjoin:\n");
    char    *_strjoin;
    _strjoin = ft_strjoin("ab", "bdc");
    printf("1: %s\n", _strjoin);
    _strjoin = ft_strjoin("", "abcd");
    printf("2: %s\n", _strjoin);
    _strjoin = ft_strjoin("abcde", "");
    printf("3: %s\n", _strjoin);
    _strjoin = ft_strjoin("", "");
    printf("4: %s\n", _strjoin);
    //_strjoin = ft_strjoin(NULL, "");
    //printf("5: %s\n", _strjoin);

    printf("\n:ft_strmapi:\n");
    char    *_strmap;
    _strmap = ft_strmapi("ab", ft_add);
    printf("1: %s\n", _strmap);
    _strmap = ft_strmapi("", ft_add);
    printf("2: %s\n", _strmap);
    _strmap = ft_strmapi("abcde", ft_add);
    printf("3: %s\n", _strmap);
    //_strmap = ft_strmapi("abc", NULL);
    //printf("4: %s\n", _strmap);

    printf("\n:ft_striteri:\n");
    char    *_striteri;
    _striteri = ft_strdup("ab");
    ft_striteri(_striteri, ft_vadd);
    printf("1: %s\n", _striteri);
    _striteri = ft_strdup("");
    ft_striteri(_striteri, ft_vadd);
    printf("2: %s\n", _striteri);
    _striteri = ft_strdup("abcde");
    ft_striteri(_striteri, ft_vadd);
    printf("3: %s\n", _striteri);
    //_striteri = ft_strdup("ab");
    //ft_striteri(_striteri, NULL);
    //printf("4: %s\n", _striteri);

    printf("\n:ft_strtrim:\n");
    printf("1: %s\n", ft_strtrim("   345678    ", " "));
    printf("2: %s\n", ft_strtrim("abc345678cba", "acb"));
    printf("3: %s\n", ft_strtrim(" x 345x678", " x"));
    printf("4: %s\n", ft_strtrim("   345678    ", ""));
    printf("5: %s\n", ft_strtrim("", ""));

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
