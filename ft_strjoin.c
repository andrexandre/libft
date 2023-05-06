/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:38:36 by analexan          #+#    #+#             */
/*   Updated: 2023/04/28 12:50:40 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1len;
	int		s2len;
	int		i;
	char	*str;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	i = 0;
	str = (char *)malloc(s1len + s2len + 1);
	if (!str)
		return (NULL);
	while (i < s1len)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < s1len + s2len)
	{
		str[i] = s2[i - s1len];
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char str1[] = "123";
	char str2[] = "abc";
	char *str = ft_strjoin(str1, str2);

	printf("string: %s\n", str);
	//free(str);
}
*/