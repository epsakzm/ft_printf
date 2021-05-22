/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:49:07 by hyeopark          #+#    #+#             */
/*   Updated: 2021/05/22 17:23:43 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_integer_hex(long long n, t_info info, int radix, int *result)
{
	int					len;
	unsigned int		number;

	number = (unsigned int)n;
	len = ft_numlen(number, radix);
	if (info.flag == 0)
		return (print_leftize_integer(number, info, radix, result));
	hex_width_handling(&info, len, result);
	while (info.precision - len > 0)
	{
		info.precision--;
		wc1('0', result);
	}
	if (print_zero_handler(number, info, result))
	{
		if (radix == 15)
			write_positive_integer_lower(number, radix + 1, result);
		else
			write_positive_integer(number, radix, result);
	}
	return (1);
}

void	hex_width_handling(t_info *info, int len, int *result)
{
	while (info->width - info->precision > 0 && info->width - len > 0)
	{
		if (info->flag == 2 && info->is_dot != 1)
			wc1('0', result);
		else if (info->flag == 2 && info->is_dot == 1)
		{
			if (info->precision <= 0)
				wc1('0', result);
			else
				wc1(' ', result);
		}
		else
			wc1(' ', result);
		(info->width)--;
	}
}
