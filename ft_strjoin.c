#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  len_s1;
    size_t  len_s2;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    if (!(str = (char *)(malloc(sizeof(*str) * (len_s1 + len_s2 + 1)))))
        return (NULL);
    ft_strlcpy(str, s1, len_s1 + 1);
    ft_strlcat(str, s2, (len_s1 + len_s2 + 1));
    return (str);
}