/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:56:05 by jaehukim          #+#    #+#             */
/*   Updated: 2024/04/22 21:36:44 by jaehukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *input, ...);
ssize_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
int		print_char(va_list ap);
int		print_str(va_list ap);
int		print_addr(va_list ap);
int		print_dec(va_list ap);
int		print_udec(va_list ap);
int		print_hex(va_list ap, int isupper);
#endif 
