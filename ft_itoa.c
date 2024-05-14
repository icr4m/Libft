/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:55:14 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/14 14:54:47 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Donne la valeur absolue
unsigned int	get_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

size_t	nb_len(int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

void	fill_number(char *src, int nb, int len)
{
	unsigned int	i;
	unsigned int	n_abs;

	i = 0;
	n_abs = get_abs(nb);
	while (i < len)
	{
		src[len - i - 1] = (n_abs % 10) + '0';
		n_abs /= 10;
		i++;
	}
	src[len] = '\0';
}

char	*ft_itoa(int n)
{
	char	*new;
	int		len;
	bool	is_neg;

	is_neg = (n < 0);
	len = nb_len(n);
	new = (char *)malloc((len + is_neg) * sizeof(char) + 1);
	if (!new)
		return (0);
	if (is_neg)
		new[0] = '-';
	fill_number(new + is_neg, n, len);
	return (new);
}
