/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:24:37 by gusujio           #+#    #+#             */
/*   Updated: 2019/11/10 17:24:39 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_up(t_list **alst, t_list *new)
{
	t_list *alst2;

	if (*alst)
	{
		alst2 = *alst;
		while ((*alst)->next)
			*alst = (*alst)->next;
		(*alst)->next = new;
		new->next = NULL;
		*alst = alst2;
	}
	else
		*alst = new;
}
