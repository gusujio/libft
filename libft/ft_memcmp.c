/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:15:09 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/16 14:54:33 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	if (n == 0)
		return (0);
	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	i = 0;
	while (*ss1 == *ss2 && ++i < n)
	{
		ss1++;
		ss2++;
	}
	return (*ss1 - *ss2);
}
