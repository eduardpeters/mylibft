#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_content(void *s)
{
	char	*result;
	int		i;
	char	*ptr_s;

	ptr_s = (char *)(s);
	result = ft_strdup(ptr_s);
	i = 0;
	while (*(ptr_s + i))
	{
		*(result + i) = *(ptr_s + i) - 1;
		i++;
	}
	return ((void *)(result));
}

void	ft_del(void *s)
{
	if (s)
		free(s);
}

void	ft_iter(void *s)
{
	char	*ptr_s;

	ptr_s = (char *)(s);

	while (*ptr_s)
	{
		*ptr_s = *ptr_s + 1;
		ptr_s++;
	}
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
	printf("**LIBFT TESTS BONUS**\n");

	printf("\nTesting LSTNEW:\n");
	char	*str= ft_strdup("I was here first");
	char	*str1 = ft_strdup("I showed up afterwards");
	t_list	*mylist;
	t_list	*addlist;
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

	printf("\nTesting LSTADDFRONT:\n");
	t_list	**start;
	start = &mylist;
	printf("Adding last list to the front of first...\n");
	ft_lstadd_front(start, addlist);
	ft_printlist(*start);

	printf("\n\nTesting LSTSIZE:\n");
	printf("Current list size: %d\n", ft_lstsize(*start));
	
	printf("\nTesting LSTLAST:\n");
	t_list	*end;
	end = ft_lstlast(*start);
	printf("List pointer: %p\n", end);
	printf("List content: %s\n", end->content);
	printf("Next element: %p\n", end->next);

	printf("\nTesting LSTADDBACK:\n");
	char	*str2 = ft_strdup("I was late to the party");
	t_list	*backlist;
	backlist = ft_lstnew(str2);
	ft_lstadd_back(start, backlist);
	printf("Current list size: %d\n", ft_lstsize(*start));
	ft_printlist(*start);

	printf("\n\nTesting LSTSDELONE:\n");
	t_list	*dellst;
	void	(*ptrdel)(void *);
	char	*str3 = ft_strdup("I was late to the party");
	dellst = ft_lstnew(str3);
	ptrdel = &ft_del;
	printf("Creating new element...\n");
	printf("List pointer: %p\n", dellst);
	printf("List content: %s\n", dellst->content);
	printf("Next element: %p\n", dellst->next);
	printf("Deleting...\n");
	ft_lstdelone(dellst, ptrdel);
	printf("List pointer: %p\n", dellst);
	printf("List content: %s\n", dellst->content);
	printf("Next element: %p\n", dellst->next);

	printf("\nTesting LSTITER\n");
	printf("Applying ft_iter to list\n");
	ft_lstiter(*start, &ft_iter);
	ft_printlist(*start);

	printf("\n\nTesting LSTMAP\n");
	t_list	*newlst;
	newlst = ft_lstmap(*start, &ft_content, &ft_del);
	ft_printlist(*start);
	printf("\n");
	ft_printlist(newlst);
	
	printf("\n\nTesting LSTCLEAR\n");
	ft_lstclear(start, &ft_del);
	ft_lstclear(&newlst, &ft_del);
	ft_printlist(*start);
	ft_printlist(newlst);
	printf("Deletion complete!\n");
}
