/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:58:21 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/24 18:10:43 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*l;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
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
