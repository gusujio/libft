/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:41:44 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/14 19:37:48 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*al;
	t_list	*al2;

	al = *alst;
	while (al)
	{
		al2 = al;
		ft_lstdelone(&al, del);
		al = al2->next;
	}
	*alst = NULL;
}
