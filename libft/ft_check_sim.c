/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 12:39:13 by tmann             #+#    #+#             */
/*   Updated: 2019/04/15 12:41:47 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_check_sim(char *str, int sim)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == sim)
			return (1);
		i++;
	}
	return (0);
}