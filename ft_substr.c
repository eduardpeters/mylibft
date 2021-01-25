#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;
    size_t  j;

    if (!(str = (char *)(malloc(sizeof(*str) * (len + 1)))))
        return (NULL);
    i = start;
    j = 0;
    while (s[i] && j < len)
    {
        str[j] = s[i];
        i++;
        j++;
    }
    while (j < (len + 1))
    {
        str[j] = '\0';
        j++;
    }
    return (str);
}