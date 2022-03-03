/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:57:45 by ohakon            #+#    #+#             */
/*   Updated: 2021/11/30 14:29:04 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		length;

	va_start(ap, format);
	length = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			length += ft_process(format, ap);
		}
		else
			length += ft_put_c(*format);
		format++;
	}
	va_end(ap);
	return (length);
}
