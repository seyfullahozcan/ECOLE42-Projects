/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyozcan <seyozcan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:31:39 by seyozcan          #+#    #+#             */
/*   Updated: 2023/10/25 16:55:52 by seyozcan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	krktr;

	krktr = 97;
	while (krktr <= 'z')
	{
		write(1, &krktr, 1);
		krktr++;
	}
}
