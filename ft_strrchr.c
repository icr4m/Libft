/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:20:07 by ijaber            #+#    #+#             */
/*   Updated: 2024/03/23 23:44:08 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			result = ((char *)&s[i]);
			i++;
		}
		i++;
	}
	return (result);
}

/*
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("test :%s", ft_strrchr(av[1], 'o'));
	}
}
*/