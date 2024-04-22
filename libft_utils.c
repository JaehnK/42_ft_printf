/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:23:39 by jaehukim          #+#    #+#             */
/*   Updated: 2024/04/22 20:21:29 by jaehukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

ssize_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	if (!c)
		return ((char *)s + ft_strlen(s));
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		else
			s++;
	}
	return (NULL);
}
