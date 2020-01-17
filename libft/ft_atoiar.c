/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoiar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:31:41 by gusujio           #+#    #+#             */
/*   Updated: 2019/12/01 17:31:45 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int         *ft_atoiar(char **ar)//масив чаров в масив интов
{
	int *m;
	int i;

	i = 0;
	while (ar[i])
		i++;
	m = (int*)malloc(sizeof(int) * i);
	i = 0;
	while (ar[i])
	{
		m[i] = ft_atoi(ar[i]);
		i++;
	}
	return (m);
}