/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 21:14:13 by mzhan             #+#    #+#             */
/*   Updated: 2020/07/20 22:26:58 by mzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char *str, char *charset)
{
	while (*charset)
		if (*str == *charset++)
			return (1);
	return (0);
}

int		ft_wordlength(char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i] && !ft_is_sep(str + i, charset))
		i++;
	return (i);
}

int		ft_wordcount(char *str, char *charset)
{
	int i;
	int y;

	y = 0;
	while (*str)
	{
		while (*str && ft_is_sep(str, charset))
			str++;
		i = ft_wordlength(str, charset);
		str += i;
		if (i)
			y++;
	}
	return (y);
}

char	*ft_wordcpy(char *src, int n)
{
	char	*dest;

	if (!(dest = malloc((n + 1) * sizeof(char))))
		return (NULL);
	dest[n] = '\0';
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**t;
	int		size;
	int		i;
	int		n;

	size = ft_wordcount(str, charset);
	if (!(t = malloc((size + 1) * sizeof(char*))))
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && ft_is_sep(str, charset))
			str++;
		n = ft_wordlength(str, charset);
		if (!(t[i] = ft_wordcpy(str, n)))
			return (NULL);
		str += n;
	}
	t[size] = 0;
	return (t);
}
