/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:26:43 by ijaber            #+#    #+#             */
/*   Updated: 2024/03/25 21:52:47 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	size_t	i;

	tmp = malloc(count * (size + 1));
	(if != tmp) return (NULL);
	i = 0;
	while (i < count * size)
	{
		tmp[i++] = 0;
	}
	return (tmp);
}
