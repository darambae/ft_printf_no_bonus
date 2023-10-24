/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:49:30 by dabae             #+#    #+#             */
/*   Updated: 2023/10/23 18:04:32 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>

int	ft_printf(const char *format, ...);
int     ft_print_char(char c);
int     ft_print_str(const char *str);
int     ft_print_hex(unsigned int n, int capital);
int	ft_print_unsigned(unsigned int n);
int	ft_print_pointer(unsigned long long n);
int	ft_print_int(int n);

#endif
