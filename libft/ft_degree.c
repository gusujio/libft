/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_degree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:13:52 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/16 14:16:59 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_degree(int x, int n)
{
	if (n == 0)
		return (1);
	else if (n == 1)
		return (x);
	else if (n % 2 == 0)
		return (ft_degree(x * x, n / 2));
	else
		return (ft_degree(x * x, n / 2) * x);
}
