/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_integer_u.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:36:06 by sgalli            #+#    #+#             */
/*   Updated: 2022/11/07 13:03:26 by sgalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsigned_integer_u(unsigned int i)
{
	int	c;

	c = 0;
	if (i > '9')
	{
		integer_i_d(i / 10);
		integer_i_d(i % 10);
	}
	else
	{
		c++;
		i = i + 48;
		character_c(i);
	}
	return (c);
}
