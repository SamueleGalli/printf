/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:36:51 by sgalli            #+#    #+#             */
/*   Updated: 2022/11/07 13:01:14 by sgalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexadecimal_x_xx(unsigned int i, int type)
{
	if (i > 16)
	{
		hexadecimal_x_xx(i / 16, type);
		hexadecimal_x_xx(i % 16, type);
	}
	if (i > 9)
	{
		if (type == 'X')
			character_c(i + 55);
		else
		{
			character_c(i + 87);
		}
	}
	else
	{
		i = i + 48;
		character_c(i);
	}
	return (i);
}

int	hexadecimal_p(unsigned int i, int type)
{
	int	c;

	c = 0;
	if (i == 0)
	{
		return (0);
	}
	if (type == 'p')
	{
		c += 2;
		write(1, "0x", 2);
	}
	while (i != 0)
	{
		c++;
		i = i / 16;
	}
	hexadecimal_x_xx(i, type);
	return (c);
}
