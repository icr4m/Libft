/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:16:09 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/16 15:39:04 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	is_whitespace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static int	nbr_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi(const char *string)
{
	int	sign;
	int	number;

	sign = 1;
	while (is_whitespace(*string))
		string++;
	if (*string == '-')
	{
		sign = -1;
		string++;
	}
	else if (*string == '+')
		string++;
	number = nbr_len(string);
	if (number > 20 && sign < 0)
		return (0);
	else if (number > 20 && sign > 0)
		return (-1);
	number = 0;
	while (*string != '\0' && (*string >= '0' && *string <= '9'))
	{
		number = number * 10 + *string - '0';
		string++;
	}
	return (number * sign);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("The value of the homemade atoi is :%d\n", ft_atoi(av[1]));
		printf("The value of the real atoi is :%d", atoi(av[1]));
	}
}
*/
