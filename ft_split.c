/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:30:11 by analexan          #+#    #+#             */
/*   Updated: 2023/04/28 13:52:26 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	i;
	int	wc;

	i = -1;
	wc = 0;
	while (s[++i])
		if (s[i] != c && (s[i - 1] == c || i == 0))
			wc++;
	return (wc);
}

static char	**writestring(char const *s, char **strs, char c, int wc)
{
	int	i;
	int	j;

	i = 0;
	while (i < wc)
	{
		j = 0;
		while (*s == c)
			s++;
		while (s[j] && s[j] != c)
			j++;
		strs[i] = (char *)malloc(j + 1);
		if (!strs[i])
			return (NULL);
		ft_strlcpy(strs[i], s, j + 1);
		s += j;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		wc;

	wc = wordcount(s, c);
	strs = malloc((wc + 1) * sizeof(char *));
	if (!strs || !s)
		return (NULL);
	strs = writestring(s, strs, c, wc);
	return (strs);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "   how are you doing   ";
	char	dlm = ' ';
	char	**arr_of_arr = ft_split(str, dlm);
	int	i = -1;

	while (arr_of_arr[++i])
		printf("arr[%i]: %s\n", i, arr_of_arr[i]);
	i = -1;
	while (arr_of_arr[++i])
		free(arr_of_arr[i]);
	free(arr_of_arr);
	return (0);
}
*/