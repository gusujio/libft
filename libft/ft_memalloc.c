/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:41:29 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/14 20:27:51 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*u;

	if (!(u = (char*)malloc(size)))
		return (NULL);
	while (size > 0)
	{
		u[size - 1] = 0;
		size--;
	}
	return (u);
}
