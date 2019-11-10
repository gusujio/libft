/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:33:55 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/15 18:45:22 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(n) == 0)
		return ((char*)h);
	while (h[i] && i < len)
	{
		if (h[i] == n[0])
		{
			j = 0;
			while (n[j] == h[i + j] && n[j] && j + i <= len)
				j++;
			if (n[j] == '\0' && j <= len)
				return ((char*)h + i);
		}
		i++;
	}
	return (NULL);
}
