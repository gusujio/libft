/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:41:20 by gusujio           #+#    #+#             */
/*   Updated: 2019/10/02 14:12:10 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *h, const char *n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(n) == 0)
		return ((char*)h);
	while (h[i])
	{
		if (h[i] == n[0])
		{
			j = 0;
			while (n[j] == h[i + j] && n[j])
				j++;
			if (n[j] == '\0')
				return ((char*)h + i);
		}
		i++;
	}
	return (NULL);
}
