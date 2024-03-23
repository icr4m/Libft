/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:09:20 by ijaber            #+#    #+#             */
/*   Updated: 2024/03/23 19:09:25 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

int	main(void)
{
	char *str = "Hello, World!";
	char *str2 = "Hello, World!";

	ft_bzero(str, 6);
	printf("bzero homemade :%s\n", str);
	bzero(str, 6);
	printf("bzero OG:%s\n", str2);
}