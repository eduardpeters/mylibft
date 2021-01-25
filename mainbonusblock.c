#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	fi(unsigned int index, char c)
{
	if (index % 2 == 0)
		return (c + 1);
	else if (index % 3 == 0)
		return ('$');
	else
		return (c);
}

int main(void)
{
	char	str[] = "Exists";
	char	str1[] = "Me:";
	t_list	*mylist;
	t_list	*addlist;
	t_list	**start;
	
	printf("Creating list, adding: %s as content\n", str);
	mylist = ft_lstnew(str);
	printf("List pointer: %p\n", mylist);
	printf("List content: %s\n", mylist->content);
	printf("Next element: %p\n", mylist->next);
	printf("Creating list, adding: %s as content\n", str1);
	addlist = ft_lstnew(str1);
	printf("List pointer: %p\n", addlist);
	printf("List content: %s\n", addlist->content);
	printf("Next element: %p\n", addlist->next);
	printf("Adding last list to the front of first...\n");
	start = &mylist;
	ft_lstadd_front(start, addlist);
	while (*start)
	{
		printf("Element: %s\n", (*start)->content);
		printf("Next: %p\n", (*start)->next);
		*start = (*start)->next;
		printf("Start: %p\n", *start);
	}
	free(mylist);
	free(addlist);
}
