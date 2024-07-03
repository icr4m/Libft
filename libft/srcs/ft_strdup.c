/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:05:27 by ijaber            #+#    #+#             */
/*   Updated: 2024/03/25 21:25:04 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("new string :%s\n", ft_strdup(av[1]));
		printf("new string :%s\n", strdup(av[1]));
	}
	return (0);
}
*/