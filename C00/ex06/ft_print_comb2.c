/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 15:50:32 by mzhan             #+#    #+#             */
/*   Updated: 2020/07/07 13:56:58 by mzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int i)
{
	int u;
	int d;

	d = i / 10 + 48;
	u = i % 10 + 48;
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_rwhile(int l, int r)
{
	ft_print(l);
	write(1, " ", 1);
	ft_print(r);
}

void	ft_print_comb2(void)
{
	int l;
	int r;

	l = 0;
	while (l <= 99)
	{
		r = l + 1;
		while (r <= 99)
		{
			ft_rwhile(l, r);
			if (l < 98 || r < 99)
			{
				write(1, ", ", 2);
			}
			r++;
		}
		l++;
	}
}
