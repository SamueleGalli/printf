/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:10:43 by sgalli            #+#    #+#             */
/*   Updated: 2022/11/07 13:05:54 by sgalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	character_c(int c);
int	integer_i_d(long int i);
int	hexadecimal_p(unsigned int i, int type);
int	string_s(char *c);
int	unsigned_integer_u(unsigned int i);
int	ft_printf(const char *str, ...);

#endif
