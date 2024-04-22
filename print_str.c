/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:46:39 by jaehukim          #+#    #+#             */
/*   Updated: 2024/04/22 21:07:18 by jaehukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_str(va_list ap)
{
	char	*s;
	int		len;

	s = va_arg(ap, char *);
	if (!s)
		return (write(1, "(null)", 6));
	len = ft_strlen(s);
	return (write(1, s, len));
}
