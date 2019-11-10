/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:09:34 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/24 18:42:39 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*l;
	size_t	i;
	char	*k;

	k = (char*)malloc(1);
	i = 0;
	k[0] = 0;
	if (!s1 || !s2)
		return (k);
	if (!(l = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (*s1)
	{
		l[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		l[i] = *s2;
		s2++;
		i++;
	}
	l[i] = 0;
	return (l);
}
