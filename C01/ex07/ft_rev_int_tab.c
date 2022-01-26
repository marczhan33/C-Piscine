/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 18:21:58 by mzhan             #+#    #+#             */
/*   Updated: 2020/07/07 14:41:51 by mzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int div;
	int count;

	div = size / 2;
	count = 0;
	while (count < div)
	{
		ft_swap(&tab[count], &tab[(size - 1) - count]);
		count++;
	}
}

void	ft_swap(int *a, int *b)
{
	int tps;

	tps = *a;
	*a = *b;
	*b = tps;
}
