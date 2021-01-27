#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_content(void *s)
{
	void	*result;
	int		i;

	result = ft_calloc(1, ft_strlen(s));
	ft_memcpy(result, s, ft_strlen(s));
	i = 0;
	while (*(char *)(s + i))
	{
		printf("i es: %d\n", i);
		*(char *)(result + i) = *(char *)(s + i) + 1;
		printf("Pasa de: %c\n", *(char *)(s + i));
		printf("A ser: %c\n", (*(char *)(s + i)) + 1);
		printf("Escribe: %c\n", *(char *)(result + i));
		i++;
	}
	return (result);
}

void	ft_del(void *s)
{
	if (s)
		free(s);
}

void	ft_printlist(t_list *lst)
{
	while (lst)
	{
		printf(" %s ", lst->content);
		lst = lst->next;
	}
}

int main(void)
{
	char	*str= ft_strdup("Exists");
	char	*str1 = ft_strdup("Me:");
	char	*str2 = ft_strdup("Or Not");
	t_list	*mylist;
	t_list	*addlist;
	t_list	*backlist;
	t_list	**start;
	t_list	**startcpy;
	t_list	**end;
	t_list	*newlst;
	
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
	start = &mylist;
	//start = NULL;
	end = &mylist;
	*end = ft_lstlast(*start);
	startcpy = start;
	printf("startcpy: %p\n", *startcpy);
	//end = NULL;
	//printf("%p\n", start);
	//printf("%p\n", *start);
	printf("Initial list size: %d\n", ft_lstsize(*start));
	printf("Adding last list to the front of first...\n");
	ft_lstadd_front(start, addlist);
	printf("startcpy: %p\n", *startcpy);
	printf("Current list size: %d\n", ft_lstsize(*start));
	printf("Final content: %s\n", (*end)->content);
	printf("Adding new final element to the list\n");
	backlist = ft_lstnew(str2);
	ft_lstadd_back(start, backlist);
	printf("Current list size: %d\n", ft_lstsize(*start));
	printf("%p\n", mylist);
	startcpy = start;
	printf("startcpy: %p\n", *startcpy);
	printf("start: %p\n", *start);
	printf("startcpy: %p\n", *startcpy);
	newlst = ft_lstmap(*start, &ft_content, &ft_del);
	ft_printlist(*start);
	ft_printlist(newlst);
	//ft_lstdelone(backlist, &ft_del);
	ft_lstclear(start, &ft_del);
	ft_lstclear(&newlst, &ft_del);
	ft_printlist(*start);
	ft_printlist(newlst);
	printf("\n%p\n", mylist);
	printf("%p\n", addlist);
	printf("%p\n", backlist);
	//free(mylist);
	//free(addlist);
	//free(backlist);
}
