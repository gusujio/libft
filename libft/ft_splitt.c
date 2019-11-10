/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:03:49 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/16 13:07:07 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_splitt(char const *s, char c, size_t i, size_t l)
{
	char	**zx;
	size_t	j;

	j = 0;
	if (!(zx = (char**)malloc((l + 1) * sizeof(char*))))
		return (NULL);
	zx[l] = NULL;
	while (s[i])
	{
		if (s[i] != c)
		{
			l = ft_strlen2(s + i, c);
			if (!(zx[j] = (char *)malloc((l + 1) * sizeof(char))))
				return (NULL);
			ft_memmove(zx[j], s + i, l);
			zx[j][l] = '\0';
			j++;
			i += l - 1;
		}
		i++;
	}
	return (zx);
}
