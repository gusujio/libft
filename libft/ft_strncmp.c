/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:58:59 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/14 22:40:15 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	i = 0;
	while (ss1[i] == ss2[i] && ss1[i] && ss2[i] && i < n)
		i++;
	i = (i == n ? i - 1 : i);
	return (ss1[i] - ss2[i]);
}
