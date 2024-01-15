/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyozcan <seyozcan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:10:58 by seyozcan          #+#    #+#             */
/*   Updated: 2023/10/29 04:21:55 by seyozcan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	kutu;
	int	a;
	int	b;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		kutu = tab[a];
		tab[a] = tab[b];
		tab[b] = kutu;
		a++;
		b--;
	}
}
