/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 16:55:13 by gusujio           #+#    #+#             */
/*   Updated: 2019/11/26 19:25:14 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa2(unsigned long long int nbr)
{
	char					*str;
	unsigned long long int	nb;
	unsigned long long int	index;
	unsigned long long int	size;

	nb = nbr;
	size = ft_lenint2(nb);
	index = 0;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	index = size - 1;
	while (nb >= 10)
	{
		str[index--] = (char)(nb % 10 + 48);
		nb /= 10;
	}
	str[index] = (char)(nb % 10 + 48);
	str[size] = '\0';
	return (str);
}
