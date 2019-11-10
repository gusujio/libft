/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 17:38:41 by gusujio           #+#    #+#             */
/*   Updated: 2019/11/07 14:39:01 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_next_line(const int fd, char **line)
{
	static char	*s[10240] = {NULL};
	char		*s2;
	char		l[BUFF_SIZE + 1];
	int			res;

	if (fd < 0 || BUFF_SIZE < 0 || !line || fd > 10240)
		return (-1);
	while (!ft_strchr(s[fd], '\n') && (res = read(fd, l, BUFF_SIZE)) > 0)
	{
		l[res] = '\0';
		s2 = ft_strjoin((s[fd] == NULL ? "" : s[fd]), l);
		ft_strdel(&s[fd]);
		s[fd] = s2;
	}
	s2 = s[fd];
	if (res < 0 || !(*line = (char *)malloc(ft_strlen2(s2, '\n') + 1)))
		return (-1);
	ft_memmove(*line, s2, (res = ft_strlen2(s2, '\n')));
	s[fd] = ft_strjoin("", s2 + res + (s2[res] == 0 ? 0 : 1));
	l[0] = (s2[res] == '\n');
	ft_strdel(&s2);
	(*line)[res] = '\0';
	return (res || l[0]);
}
