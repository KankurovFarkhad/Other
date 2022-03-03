/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:57:05 by ohakon            #+#    #+#             */
/*   Updated: 2021/11/30 14:29:27 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_process(const char *format, va_list ap);
int	ft_put_x(unsigned int n, char upper);
int	ft_put_u(unsigned int n);
int	ft_put_c(char c);
int	ft_put_d(int n);
int	ft_put_p(unsigned long long ptr);
int	ft_put_s(char *s);

#endif
