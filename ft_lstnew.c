/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:46:37 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/16 18:32:16 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

#include <stdio.h>
#include <stdlib.h>

void	test_ft_lstnew(void)
{
	t_list	*node1;
	t_list	*node2;
	int		*data1;
	char	*data2;

	data1 = (int *)malloc(sizeof(int));
	*data1 = 42;
	node1 = ft_lstnew(data1);
	printf("Test 1: Creating a list node with an integer\n");
	if (node1)
		printf("Content of the node: %d\n", *(int *)(node1->content));
	else
		printf("Failed to create node.\n");
	data2 = "Hello, world!";
	node2 = ft_lstnew(data2);
	printf("\nTest 2: Creating a list node with a string\n");
	if (node2)
		printf("Content of the node: %s\n", (char *)(node2->content));
	else
		printf("Failed to create node.\n");
}

int	main(void)
{
	test_ft_lstnew();
	return (EXIT_SUCCESS);
}