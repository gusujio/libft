/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 15:49:08 by gusujio           #+#    #+#             */
/*   Updated: 2019/11/23 15:49:10 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa2(unsigned long long int nbr)
{
	char *str;
	unsigned long long int nb;
	unsigned long long int index;
	unsigned long long int size;
	
	if (nbr < 0)
		nb = (nbr * -1);
	else
		nb = nbr;
	if (nbr == -9223372036854775807 - 1)
		return (ft_strdup("-9223372036854775808"));
	size = ft_lenint2(nb);
	index = 0;
	if (!(str = (char *) malloc(sizeof(char) * (size + 1 + (nbr < 0 ? 1 : 0)))))
		return (0);
	if (nbr < 0 && (str[index] = '-'))
		size++;
	index = size - 1;
	while (nb >= 10)
	{
		str[index--] = (char) (nb % 10 + 48);
		nb /= 10;
	}
	str[index] = (char) (nb % 10 + 48);
	str[size] = '\0';
	return (str);
}