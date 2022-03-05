/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjunior <rjunior@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:08:00 by rjunior           #+#    #+#             */
/*   Updated: 2022/03/05 17:11:53 by rjunior          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int ft_printf(const char *format, ...);
int ft_check_arg(char c, va_list args);
int ft_putchar(char c, int i);
int ft_putstr(const void *str);
int ft_pointer(unsigned long int nbr);
int ft_strlen(const char *s);
int ft_base(long long int nbr, char *base);

#endif