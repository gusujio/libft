/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:47:49 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/18 14:08:52 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *buf;

	if (dst != src)
	{
		buf = (char*)malloc(len);
		if (buf)
		{
			ft_memcpy(buf, src, len);
			ft_memcpy(dst, buf, len);
			free(buf);
		}
	}
	return (dst);
}
