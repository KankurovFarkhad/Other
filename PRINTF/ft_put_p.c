/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:57:49 by ohakon            #+#    #+#             */
/*   Updated: 2021/11/30 14:16:50 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_p(unsigned long long int n)
{
	int	remain;
	int	len;

	len = 0;
	remain = n % 16;
	if (n / 16)
		len += ft_put_p(n / 16);
	if (remain > 9)
		len += ft_put_c('a' + (remain - 10));
	else
		len += ft_put_d(remain);
	return (len);
}
