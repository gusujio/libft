/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:19:41 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/17 13:31:01 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			l++;
			i += ft_strlen2(s + i, c) - 1;
		}
		i++;
	}
	return (ft_splitt(s, c, 0, l));
}
