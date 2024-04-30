/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:45:49 by ijaber            #+#    #+#             */
/*   Updated: 2024/04/30 12:00:21 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_nb(unsigned int n, int fd)
{
	if (n > 0)
	{
		print_nb(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = -n;
	}
	else
		num = n;
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
		print_nb(num, fd);
}

/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
}
*/