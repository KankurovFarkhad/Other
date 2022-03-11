/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:12:01 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/11 12:12:01 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tohex(unsigned int d, const char *base, int *cp)
{
	if (d >= 16)
		ft_tohex(d / 16, base, cp);
	ft_putchar(base[d % 16], cp);
}
