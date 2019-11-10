/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:07:04 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/15 19:09:23 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	j = 0;
	if (i == 0 && c == 0)
		return ((char*)s);
	if (i == 0)
		return (NULL);
	while (j <= i)
	{
		if (s[i - j] == c)
			return ((char*)s + (i - j));
		j++;
	}
	return (NULL);
}
