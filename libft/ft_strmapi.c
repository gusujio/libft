/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:59:54 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/14 20:24:53 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*c;

	if (!s)
		return (NULL);
	i = 0;
	if ((c = (char*)malloc(ft_strlen(s) + 1)))
	{
		while (s[i])
		{
			c[i] = f(i, *((char*)s + i));
			i++;
		}
		c[i] = 0;
	}
	return (c);
}
