/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:54:14 by ohakon            #+#    #+#             */
/*   Updated: 2021/11/30 17:03:01 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_d(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len += ft_put_c('-');
		len += ft_put_d(21474);
		len += ft_put_d(83648);
		return (len);
	}
	if (n < 0)
	{
		len += ft_put_c('-');
		n = -n;
	}
	if (n >= 10)
	{
		len += ft_put_d(n / 10);
		len += ft_put_d(n % 10);
	}
	else
		len += ft_put_c(n + '0');
	return (len);
}
