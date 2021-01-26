/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainbonusblock.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:23:02 by epeters-          #+#    #+#             */
/*   Updated: 2021/01/26 12:41:10 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char	str2[] = "Or Not";
	t_list	*mylist;
	t_list	*addlist;
	t_list	*backlist;
	t_list	**start;
	t_list	**end;
	
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
	end = &addlist;
	printf("Lista antes mide: %d\n", ft_lstsize(*start));
	ft_lstadd_front(start, addlist);
	printf("Lista mide ahora: %d\n", ft_lstsize(*start));
	*end = ft_lstlast(*start);
	printf("Final de lista: %s\n", (*end)->content);
	printf("Adding new final element to the list\n");
	backlist = ft_lstnew(str2);
	ft_lstadd_back(start, backlist);
	while (*start)
	{
		printf("Element: %s\n", (*start)->content);
		printf("Next: %p\n", (*start)->next);
		*start = (*start)->next;
		printf("Start: %p\n", *start);
	}
	free(mylist);
	free(addlist);
	free(backlist);
}
