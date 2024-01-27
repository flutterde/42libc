/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string_bits.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:18:34 by ochouati          #+#    #+#             */
/*   Updated: 2024/01/27 16:35:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_string_bits(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str && str[i])
	{
		j = 7;
		while (j >= 0)
			ft_putnbr_fd(((str[i] >> j--) & 1), 1);
		i++;
		if (str[i])
			ft_putchar_fd(' ', 1);
	}
}
