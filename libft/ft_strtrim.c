/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:05:46 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/20 18:28:36 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s2;
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s);
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (j > 0 && (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t'))
		j--;
	l = 0;
	if (!(s2 = malloc((j > i ? j - i : 0) + 1)))
		return (NULL);
	while (i < j)
	{
		s2[l] = s[i];
		i++;
		l++;
	}
	s2[l] = 0;
	return (s2);
}
