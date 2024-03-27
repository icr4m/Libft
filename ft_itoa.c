/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:55:14 by ijaber            #+#    #+#             */
/*   Updated: 2024/03/28 00:17:19 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_len(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*result;
	long	n;
	int		len;

	n = nb;
	len = nb_len(n);
	if (!(result = (char *)malloc(len + 1)))
		return (0);
	result[len--] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	while (n > 0)
	{
		result[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("la string :%s\n", ft_itoa(-2147483648));
}
*/