/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyozcan <seyozcan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:36:49 by seyozcan          #+#    #+#             */
/*   Updated: 2023/11/05 17:56:04 by seyozcan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		x = 0;
		while (str[i + x] == to_find[x] && str[i])
		{
			if (to_find[x + 1] == '\0')
				return (&str[i]);
			x++;
		}
		i++;
	}
	return (0);
}
