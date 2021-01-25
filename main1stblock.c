#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int	main(void)
{
	char str1[] = "Hola buenos dias";
	char str2[] = "Hola buenos dias";
	char *str_dup;
	char dst1[] = "hola";
	char dst2[] = "hola";
	char *ptr_dst1;
	char *ptr_dst2;
	char concat1[18];
	char concat2[18];
	
	printf("Testing ft_strlen: %zu\n", ft_strlen("Una cadena"));
	printf("Testing strlen: %zu\n", ft_strlen("Una cadena"));
	printf("Testing ft_isalpha: %d\n", ft_isalpha('g'));
	printf("Testing isalpha: %d\n", isalpha('g'));
	printf("Testing ft_isalpha: %d\n", ft_isalpha('.'));
	printf("Testing isalpha: %d\n", isalpha('.'));
	printf("Testing ft_isdigit: %d\n", ft_isdigit('4'));
	printf("Testing isdigit: %d\n", isdigit('4'));
	printf("Testing ft_isdigit: %d\n", ft_isdigit('m'));
	printf("Testing isdigit: %d\n", isdigit('m'));
	printf("Testing ft_isalnum: %d\n", ft_isalnum('i'));
	printf("Testing isalnum: %d\n", isalnum('i'));
	printf("Testing ft_isalnum: %d\n", ft_isalnum('$'));
	printf("Testing isalnum: %d\n", isalnum('$'));
	printf("Testing ft_isascii: %d\n", ft_isascii(134));
	printf("Testing isascii: %d\n", isascii(134));
	printf("Testing ft_isascii: %d\n", ft_isascii('&'));
	printf("Testing isascii: %d\n", isascii('&'));
	printf("Testing ft_isprint: %d\n", ft_isprint(126));
	printf("Testing isprint: %d\n", isprint(126));
	printf("Testing ft_isprint: %d\n", ft_isprint(' '));
	printf("Testing isprint: %d\n", isprint(' '));
	printf("Testing ft_toupper: %c\n", ft_toupper('b'));
	printf("Testing toupper: %c\n", toupper('b'));
	printf("Testing ft_toupper: %c\n", ft_toupper('A'));
	printf("Testing toupper: %c\n", toupper('A'));
	printf("Testing ft_tolower: %c\n", ft_tolower('J'));
	printf("Testing tolower: %c\n", tolower('J'));
	printf("Testing ft_tolower: %c\n", ft_tolower('!'));
	printf("Testing tolower: %c\n", tolower('!'));
	ft_bzero(str1, 5);
	bzero(str2, 5);
	printf("Testing ft_bzero: %s pos5: %c\n", str1, str1[5]);
	printf("Testing bzero: %s pos5: %c\n", str2, str2[5]);
	printf("Testing ft_memset: %s\n", ft_memset(str1, 67, 5));
	printf("Testing memset: %s\n", memset(str2, 67, 5));
	ptr_dst1 = ft_memcpy(dst1, "3210", 3);
	printf("Testing ft_memcpy: %s\n", ptr_dst1);
	ptr_dst2 = memcpy(dst2, "3210", 3);
	printf("Testing memcpy: %s\n", ptr_dst2);
	str_dup = ft_calloc(5, 1);
	ft_strlcpy(str_dup, "0123", 5);
	printf("Testing ft_calloc: %s\n", str_dup);
	free(str_dup);
	str_dup = calloc(5, 1);
	ft_strlcpy(str_dup, "0123", 5);
	printf("Testing calloc: %s\n", str_dup);
	free(str_dup);
	str_dup = ft_strdup(str1);
	printf("Testing ft_strdup: %s\n", str_dup);
	free(str_dup);
	str_dup = strdup(str1);
	printf("Testing strdup: %s\n", str_dup);
	free(str_dup);
	concat1[0] = '!';
	concat1[1] = '\0';
	concat2[0] = '!';
	concat2[1] = '\0';
	printf("Testing ft_strlcpy: %zu -:- %s\n", ft_strlcpy(str2, str1, 11), str2);
	printf("Testing strlcpy: %zu -:- %s\n", strlcpy(str2, str1, 11), str2);
	printf("Testing ft_strlcat: %zu -:- %s\n", ft_strlcat(concat1, str1, 15), concat1);
	printf("Testing strlcat: %zu -:- %s\n", strlcat(concat2, str1, 15), concat2);
	str_dup = ft_strchr(str1, 'b');
	printf("Testing ft_strchr: %p -:- %s\n", str_dup, str_dup);
	str_dup = strchr(str1, 'b');
	printf("Testing strchr: %p -:- %s\n", str_dup, str_dup);
	str_dup = ft_strrchr(str1, 'a');
	printf("Testing ft_strrchr: %p -:- %s\n", str_dup, str_dup);
	str_dup = strrchr(str1, 'a');
	printf("Testing strrchr: %p -:- %s\n", str_dup, str_dup);
	printf("%s\n", str1);
	printf("Testing ft_strnstr: %s\n", ft_strnstr(str1, "nos", 15));
	printf("Testing strnstr: %s\n", strnstr(str1, "nos", 15));
	printf("Testing ft_strncmp: %d\n", ft_strncmp("abc", "abz", 6));
	printf("Testing strncmp: %d\n", strncmp("abc", "abz", 6));
	printf("Testing ft_atoi: %d\n", ft_atoi(" 	97.654"));
	printf("Testing atoi: %d\n", atoi(" 	97.654"));
}
