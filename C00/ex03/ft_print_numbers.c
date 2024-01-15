/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyozcan <seyozcan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:56:48 by seyozcan          #+#    #+#             */
/*   Updated: 2023/10/25 20:36:11 by seyozcan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	rkm;

	rkm = 48;
	while (rkm <= '9')
	{
		write(1, &rkm, 1);
		rkm++;
	}
}
