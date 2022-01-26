/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:32:57 by mzhan             #+#    #+#             */
/*   Updated: 2020/07/12 16:43:13 by mzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlength(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_isvalid(char *base)
{
	int i;
	int j;

	i = 0;
	if ((ft_strlength(base) == 0) || (ft_strlength(base) == 1))
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if ((base[i] == '-') || (base[i] == '+'))
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			tab[100];
	int			i;
	long int	longnb;

	i = 0;
	longnb = nbr;
	if (ft_isvalid(base) == 1)
	{
		if (longnb == 0)
			write(1, &base[0], 1);
		if (longnb < 0)
		{
			longnb = -longnb;
			write(1, "-", 1);
		}
		while (longnb > 0)
		{
			tab[i++] = base[(longnb % ft_strlength(base))];
			longnb = longnb / ft_strlength(base);
		}
		while (i > 0)
			write(1, &tab[--i], 1);
	}
}
