/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:57:09 by ohakon            #+#    #+#             */
/*   Updated: 2021/11/30 14:47:35 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_process(const char *format, va_list ap)
{
	int	len;

	len = 0;
	if (*format == '%')
		len += ft_put_c('%');
	else if (*format == 'c')
		len += ft_put_c(va_arg(ap, int));
	else if (*format == 'u')
		len += ft_put_u(va_arg(ap, unsigned int));
	else if (*format == 's')
		len += ft_put_s(va_arg(ap, char *));
	else if (*format == 'd' || *format == 'i')
		len += ft_put_d(va_arg(ap, int));
	else if (*format == 'x')
		len += ft_put_x(va_arg(ap, unsigned int), 'x');
	else if (*format == 'X')
		len += ft_put_x(va_arg(ap, unsigned int), 'X');
	else if (*format == 'p')
	{
		len += ft_put_s("0x");
		len += ft_put_p(va_arg(ap, unsigned long long int));
	}
	return (len);
}
