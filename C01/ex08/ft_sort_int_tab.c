/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyozcan <seyozcan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 03:22:47 by seyozcan          #+#    #+#             */
/*   Updated: 2023/10/29 04:22:40 by seyozcan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	empty;

	while (0 <= size)
	{
		n = 0;
		while (n < size - 1)
		{
			if (tab[n] > tab[n + 1])
			{
				empty = tab[n];
				tab[n] = tab[n + 1];
				tab[n + 1] = empty;
			}
			n++;
		}
		size--;
	}
}
