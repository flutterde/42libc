/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_strs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:00:04 by codespace         #+#    #+#             */
/*   Updated: 2024/01/29 16:03:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs && strs[i])
		ft_putendl_fd(strs[i++], 1);
}
