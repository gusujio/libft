/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:35:48 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/14 20:04:46 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*c;

	if (!s)
		return (NULL);
	i = 0;
	if (((c = (char*)malloc(ft_strlen(s) + 1))))
	{
		while (s[i])
		{
			c[i] = f(*((char*)s + i));
			i++;
		}
		c[i] = 0;
	}
	return (c);
}
