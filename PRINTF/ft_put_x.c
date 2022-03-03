/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:58:40 by ohakon            #+#    #+#             */
/*   Updated: 2021/11/30 17:04:10 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_x(unsigned int n, char upper)
{
	int	remain;
	int	len;

	len = 0;
	remain = n % 16;
	if (n / 16)
		len += ft_put_x(n / 16, upper);
	if (remain > 9)
	{
		if (upper == 'X')
			len += ft_put_c('A' + (remain - 10));
		else
			len += ft_put_c('a' + (remain - 10));
	}
	else
		len += ft_put_d(remain);
	return (len);
}
