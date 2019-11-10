/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:48:23 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/22 20:07:05 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	j2;

	i = 0;
	j = ft_strlen(dst);
	j2 = ft_strlen(src);
	if (j > size)
		return (size + j2);
	while (src[i] && i + j < size - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j2 + j);
}
