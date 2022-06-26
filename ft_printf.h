/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 23:26:38 by jv                #+#    #+#             */
/*   Updated: 2022/06/25 23:28:37 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *TEMPLATE, ...);
ssize_t	ft_printf_hex_lower(int n);
ssize_t	ft_printf_hex_upper(int n);
ssize_t	ft_printf_uint(unsigned	int n);
void	reverse_array(char *str, int end);
char	*int2hex(unsigned int n, unsigned char op);
char	*lint2hex(unsigned long int n);
ssize_t	ft_printf_ptr(unsigned long int n);
#endif
