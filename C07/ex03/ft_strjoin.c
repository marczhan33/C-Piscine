/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 18:23:51 by mzhan             #+#    #+#             */
/*   Updated: 2020/07/20 14:05:32 by mzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!src)
		return (0);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		size_max(int size, char **strs, char *sep)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count = count + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
		return (malloc(0));
	if (!(str = malloc(sizeof(char) * (size_max(size, strs, sep) + 1))))
		return (0);
	i = -1;
	while (++i < size_max(size, strs, sep) + 1)
		str[i] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, (i == 0 ? 0 : sep));
		ft_strcat(str, strs[i]);
		i++;
	}
	return (str);
}
