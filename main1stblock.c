#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int	main(void)
{
	printf("**LIBFT TESTS PART ONE**\n");

	printf("\nTesting MEMSET:\n");
	char str1[] = "Hola buenos dias";
	char str2[] = "Hola buenos dias";
	printf("Result FT: %s\n", ft_memset(str1, 67, 5));
	printf("Result Orig: %s\n", memset(str2, 67, 5));
	printf("Result FT: %s\n", ft_memset(str1, '!', 1));
	printf("Result Orig: %s\n", memset(str2, '!', 1));
	//printf("Result FT: %s\n", ft_memset("", 67, 5));
	//printf("Result Orig: %s\n", memset("", 67, 5));

	printf("\nTesting BZERO:\n");
	ft_bzero(str1, 5);
	bzero(str2, 5);
	printf("Testing ft_bzero: %s pos5: %c\n", str1, str1[5]);
	printf("Testing bzero: %s pos5: %c\n", str2, str2[5]);
	ft_bzero(str1, 0);
	bzero(str2, (0));
	printf("Testing ft_bzero: %s pos5: %c\n", str1, str1[5]);
	printf("Testing bzero: %s pos5: %c\n", str2, str2[5]);
	//ft_bzero("", 5);
	//bzero("", 5);

	printf("\nTesting MEMCPY:\n");
	char dst1[] = "hola";
	char dst2[] = "hola";
	char dst3[] = "";
	char dst4[] = "";
	printf("Testing ft_memcpy: %s\n", ft_memcpy(dst1, "3210", 3));
	printf("Testing memcpy: %s\n", memcpy(dst2, "3210", 3));
	printf("Reversing...\n");
	ft_memcpy(dst1, "hola", 3);
	memcpy(dst2, "hola", 3);
	printf("%s & %s = ", dst1, dst2);
	ft_memcpy(dst1, "hola", 0);
	memcpy(dst2, "hola", 0);
	printf("%s & %s\n", dst1, dst2);
	ft_memcpy(dst3, "3210", 1);
	memcpy(dst4, "3210", 1);
	printf("%s & %s = ", dst3, dst4);
	ft_memcpy(dst3, "", 1);
	memcpy(dst4, "", 1);
	printf("%s & %s\n", dst3, dst4);

	printf("\nTesting MEMCCPY:\n");
	printf("Testing ft_memccpy: %s\n", ft_memccpy(dst1, "3210", '1', 3));
	printf("Testing memccpy: %s\n", memccpy(dst2, "3210", '1', 3));
	printf("Reversing...\n");
	printf("%p & ", ft_memccpy(dst1, "hola", '0', 3));
	printf("%p\n", memccpy(dst2, "hola", '0', 3));
	printf("%s & %s\n", dst1, dst2);


	printf("\nTesting MEMMOVE:\n");
	char str3[50] = "I am going from Delhi to Gorakhpur";
    printf( "\nTesting ft_memmove with overlap:\n" );
    printf( "Original: %s\n",str3);
    printf( "Source: %s\n", str3 + 5);
    printf( "Destination: %s\n", str3 + 11);
    ft_memmove(str3 + 11, str3 + 5, 29);
    printf( "Result: %s\n", str3);
	char str4[50] = "I am going from Delhi to Gorakhpur";
    printf( "Testing memmove with overlap:\n" );
    memmove(str4 + 11, str4 + 5, 29);
    printf( "Result: %s\n", str4 );
	printf( "\nTesting ft_memmove without overlap:\n" );
    printf( "Original: %s\n",str3);
    printf( "Source: %s\n", str3 + 2);
    printf( "Destination: %s\n", str3 + 15);
    ft_memmove(str3 + 15, str3 + 2, 10);
    printf( "Result: %s\n", str3);
    printf( "Testing memmove with overlap:\n" );
    memmove(str4 + 15, str4 + 2, 10);
    printf( "Result: %s\n", str4 );

	printf("\nTesting MEMCHR:\n");
	printf("Testing ft_memchr: %s\n", ft_memchr("abc", '0', 4));
	printf("Testing memchr: %s\n", memchr("abc", '0', 4));
	printf("Testing ft_memchr: %s\n", ft_memchr(str3, 'k', 50));
	printf("Testing memchr: %s\n", memchr(str3, 'k', 50));

	printf("\nTesting MEMCMP:\n");
	printf("Testing ft_memcmp: %d\n", ft_memcmp("abc", "abz", 4));
	printf("Testing memcmp: %d\n", memcmp("abc", "abz", 4));
	printf("Testing ft_memcmp: %d\n", ft_memcmp("abc", "abc", 4));
	printf("Testing memcmp: %d\n", memcmp("abc", "abc", 4));

	printf("\nTesting STRLEN:\n");
	printf("Testing ft_strlen: %zu\n", ft_strlen("A string..."));
	printf("Testing strlen: %zu\n", ft_strlen("A string..."));
	printf("Testing ft_strlen: %zu\n", ft_strlen(""));
	printf("Testing strlen: %zu\n", ft_strlen(""));
	printf("Testing ft_strlen: %zu\n", ft_strlen("A longer string"));
	printf("Testing strlen: %zu\n", ft_strlen("A longer string"));
	
	printf("\nTesting STRLCPY:\n");
	ft_memcpy(str1, "hola ", 5);
	memcpy(str2, "hola ", 5);
	printf("Testing ft_strlcpy: %zu -:- %s\n", ft_strlcpy(str2, str1, 0), str2);
	printf("Testing strlcpy: %zu -:- %s\n", strlcpy(str2, str1, 0), str2);
	printf("Testing ft_strlcpy: %zu -:- %s\n", ft_strlcpy(str2, str1, 11), str2);
	printf("Testing strlcpy: %zu -:- %s\n", strlcpy(str2, str1, 11), str2);
	printf("Testing ft_strlcpy: %zu -:- %s\n", ft_strlcpy(str2, str1, 17), str2);
	printf("Testing strlcpy: %zu -:- %s\n", strlcpy(str2, str1, 17), str2);
	printf("Testing ft_strlcpy: %zu -:- %s\n", ft_strlcpy(str2, "abc123", 5), str2);
	printf("Testing strlcpy: %zu -:- %s\n", strlcpy(str2, "abc123", 5), str2);

	printf("\nTesting STRDUP:\n");
	char *str_dup;
	str_dup = ft_strdup(str1);
	printf("Testing ft_strdup: %s\n", str_dup);
	free(str_dup);
	str_dup = strdup(str1);
	printf("Testing strdup: %s\n", str_dup);
	free(str_dup);
	str_dup = ft_strdup("");
	printf("Testing ft_strdup: %s\n", str_dup);
	free(str_dup);
	str_dup = strdup("");
	printf("Testing strdup: %s\n", str_dup);
	free(str_dup);

	printf("\nTesting CALLOC:\n");
	str_dup = ft_calloc(5, 1);
	ft_strlcpy(str_dup, "0123", 5);
	printf("Testing ft_calloc: %s\n", str_dup);
	free(str_dup);
	str_dup = calloc(5, 1);
	ft_strlcpy(str_dup, "0123", 5);
	printf("Testing calloc: %s\n", str_dup);
	free(str_dup);
	
	printf("\nTesting STRLCAT:\n");
	char concat1[18];
	char concat2[18];
	concat1[0] = '!';
	concat1[1] = '\0';
	concat2[0] = '!';
	concat2[1] = '\0';
	printf("Testing ft_strlcat: %zu -:- %s\n", ft_strlcat(concat1, str1, 15), concat1);
	printf("Testing strlcat: %zu -:- %s\n", strlcat(concat2, str1, 15), concat2);
	
	printf("\nTesting STRCHR:\n");
	str_dup = ft_strchr(str1, 'b');
	printf("Testing ft_strchr: %p -:- %s\n", str_dup, str_dup);
	str_dup = strchr(str1, 'b');
	printf("Testing strchr: %p -:- %s\n", str_dup, str_dup);
	str_dup = ft_strrchr(str1, 'a');
	str_dup = ft_strchr(str1, '.');
	printf("Testing ft_strchr: %p -:- %s\n", str_dup, str_dup);
	str_dup = strchr(str1, '.');
	printf("Testing strchr: %p -:- %s\n", str_dup, str_dup);

	printf("\nTesting STRRCHR:\n");
	printf("Testing ft_strrchr: %p -:- %s\n", str_dup, str_dup);
	str_dup = strrchr(str1, 'a');
	printf("Testing strrchr: %p -:- %s\n", str_dup, str_dup);
	
	printf("\nTesting STRNSTR:\n");
	printf("%s\n", str1);
	printf("Testing ft_strnstr: %s\n", ft_strnstr(str1, "nos", 15));
	printf("Testing strnstr: %s\n", strnstr(str1, "nos", 15));
	printf("Testing ft_strnstr: %s\n", ft_strnstr(str1, "nos", 10));
	printf("Testing strnstr: %s\n", strnstr(str1, "nos", 10));
	
	printf("\nTesting STRNCMP:\n");
	printf("Testing ft_strncmp: %d\n", ft_strncmp("abc", "abz", 6));
	printf("Testing strncmp: %d\n", strncmp("abc", "abz", 6));
	printf("Testing ft_strncmp: %d\n", ft_strncmp("abc", "abz", 0));
	printf("Testing strncmp: %d\n", strncmp("abc", "abz", 0));
	printf("Testing ft_strncmp: %d\n", ft_strncmp("abc", "abz", 2));
	printf("Testing strncmp: %d\n", strncmp("abc", "abz", 2));
	
	printf("\nTesting ATOI:\n");
	printf("Testing ft_atoi: %d\n", ft_atoi(" 	97.654"));
	printf("Testing atoi: %d\n", atoi(" 	97.654"));
	printf("Testing ft_atoi: %d\n", ft_atoi(" \t	-118915197adsa"));
	printf("Testing atoi: %d\n", atoi(" \t	-118915197adsa"));
	printf("Testing ft_atoi: %d\n", ft_atoi(" 	\v042school"));
	printf("Testing atoi: %d\n", atoi(" 	\v042school"));
	printf("Testing ft_atoi: %d\n", ft_atoi(" 	+043school"));
	printf("Testing atoi: %d\n", atoi(" 	+043school"));
	printf("Testing ft_atoi: %d\n", ft_atoi("hidden1"));
	printf("Testing atoi: %d\n", atoi("hidden1"));

	printf("\nTesting IS FTs:\n");
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

	printf("\nDONE\n");
    return 0;
}
