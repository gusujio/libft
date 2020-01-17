/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:59:08 by gusujio           #+#    #+#             */
/*   Updated: 2019/11/26 16:45:52 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# define BUFF_SIZE 5
# define PRC "\x1b[31m"
# define PWC "\x1b[107m"
# define PGC "\x1b[32m"
# define PYC "\x1b[33m"
# define PBC "\x1b[34m"
# define PMC "\x1b[35m"
# define PCC "\x1b[36m"
# define EPC "\x1b[0m"

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

typedef struct			s_ilia
{
	char				type;
	char				*speth;
	char				*str;
	int					mines;
	int					plus;
	int					space;
	int					resh;
	int					zero;
	int					width;
	int					point;
	unsigned int		v_i;
}						t_il;

typedef union			u_types
{
	long double			f;
	unsigned long long	m;
	short int			e[5];
}						t_ailia;

void					*ft_memset(void *b, int c, size_t len);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memccpy(void *dst,
						const void *src, int c, size_t n);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
size_t					ft_strlen(const char *s);
char					*ft_strdup(const char *s1);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, const char *src, size_t len);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strncat(char *s1, const char *s2, size_t n);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strnstr(const char *haystack,
						const char *needle, size_t len);
int						ft_atoi(const char *str);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_toupper(int c);
int						ft_tolower(int c);
int						ft_unletter(int c);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
char					*ft_strnew(size_t size);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
						char(*f)(unsigned int, char));
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strsub(char const *s,
						unsigned int start, size_t len);
char					*ft_strjoin(char *s1, char *s2);
char					*ft_strjoin1(char *s1, char *s2);
char					*ft_strjoin2(char *s1, char *s2);
char					*ft_strjoin3(char *s1, char *s2);
char					*ft_strdow(const char *s);
char					*ft_strup(const char *s);
size_t					ft_strlen3(const char *s, const char *c);
int						ft_lenint(long long int nb);
int						ft_lenint2(unsigned long long int nb);
char					*ft_strtrim(char const *s);
char					**ft_strsplit(char const *s, char c);
char					*ft_itoa(long long int nbr);
char					*ft_itoa2(unsigned long long int nbr);
void					ft_putchar(char c);
void					ft_putstr(char const *s);
void					ft_putendl(char const *s);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr_fd(int n, int fd);
t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
size_t					ft_strlen2(const char *s, char c);
char					**ft_splitt(char const *s, char c, size_t i, size_t l);
unsigned long long int	ft_degree(unsigned long
						long int x, unsigned long long int n);
int						ft_mod(long long int n);
int						ft_root(int x);
int                     get_next_line(const int fd, char **line);
unsigned long long int	sizes(unsigned long long int osn,
                                unsigned long long int ost);
char					*perevod2(unsigned long long int x, char c);
char					*del10(char *s, int k);
char					*revers_s(const int *s, long long int i);
char					*del10(char *s, int k);
char					*ft_degr(int k, int i);
char					*ft_multi(char *wer1, char *wer);
int						ft_printf(const char *restrict format, ...);
size_t					ft_strlen3(const char *s, const char *c);
char					*perevod(long long int x, char c);
void					obr_space(t_il *kok, char **v);
void					obr_resh(t_il *kok, char **v);
char					*obr_zv(const char *s0, va_list ar, int *len);
void					obr_struct(t_il **kok, char *s);
void					obr_sistem(char **v, char **buf, char c);
long long int			flag_sign(t_il *kok, va_list ar);
unsigned long int		flag_unsign(t_il *kok, va_list ar);
char					*table(va_list ar, t_il *kok);
char					space_or_zero(t_il *kek);
void					table_m(t_il *kok, va_list ar);
char					*ft_bit(unsigned char c);
int						obr_width_f(t_il *kok, char **v, int i, char c);
void					obr_point_f(t_il *kok, char **v);
char					*mop_f(t_il *kok, char *v);
char					*table_f(t_il *kok, va_list ar);
char					*obr_f(t_ailia ili, char *man, int z, t_il *kok);
char					*inf(t_il *kok, t_ailia ili);
void					okrug(t_il *kok, char **s);
int						onlit(char *s, char c);
void					okr2(char **s, int l, int d);
char					*mop_f(t_il *kok, char *v);
void					obr_point_f(t_il *kok, char **v);
int						obr_width_i_d(t_il *kok, char **v, int param, char c);
void					obr_point_i_d(t_il *kok, char **v);
char					*table_i_d(t_il *kok, va_list ar);
int						obr_width_o(t_il *kok, char **v, int p, char c);
void					obr_point_o(t_il *kok, char **v);
char					*table_o(t_il *kok, va_list ar);
void					obr_point_p(t_il *kok, char **v);
char					*table_p(t_il *kok, va_list ar);
int						obr_width_s_c(t_il *kok, char **v, int i, char c);
char					*mop_s_c(t_il *kok, char *v);
char					*table_s_c(t_il *kok, va_list ar);
char					*obr_char(t_il *kok, va_list ar);
char					*mop_u(t_il *kok, char *v);
char					*table_u(t_il *kok, va_list ar);
void					obr_width_x(t_il *kok, char **v, int p, char c);
char					*table_x(t_il *kok, va_list ar);
int                     ft_strcount(char *s1, char *s2);
int                     *ft_atoiar(char **ar);
#endif
