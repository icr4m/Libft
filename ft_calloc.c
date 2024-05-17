/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:26:43 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/17 11:36:24 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	size_t	total_size;

	tmp = NULL;
	total_size = count * size;
	if (total_size == 0 || count <= SIZE_MAX / size)
		tmp = (char *)malloc(total_size);
	if (!tmp)
		return (NULL);
	return (tmp);
}
