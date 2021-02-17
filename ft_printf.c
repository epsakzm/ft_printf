/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:27:35 by hyeopark          #+#    #+#             */
/*   Updated: 2021/02/17 16:39:19 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

typedef struct	flags_
{
	unsigned int a : 2;
	unsigned int b : 2;
	unsigned int c : 3;
}				flags;

int ft_printf(const char *str, ...)
{
	str = NULL;
	return 1;
}
