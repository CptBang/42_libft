/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 22:02:32 by mschroed          #+#    #+#             */
/*   Updated: 2018/12/03 13:05:06 by mschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(char const *strnum);
void				ft_bzero(void *ptr, size_t num);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
void				*ft_memalloc(size_t size);
void				*ft_memset(void *ptr, int replace, size_t num);
void				*ft_memccpy(void *cpy, const void *str, int c, size_t num);
void				*ft_memchr(const void *ptr, int value, size_t num);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void				*ft_memcpy(void *cpy, const void *str, size_t num);
void				ft_memdel(void **ap);
void				*ft_memmove(void *cpy, const void *str, size_t num);
void				*ft_memset(void *ptr, int replace, size_t num);
int					ft_numlen(int n);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
char				*ft_strcat(char *dest, char const *src);
char				*ft_strchr(char const *str, int character);
void				ft_strclr(char *s);
int					ft_strcmp(char const *str1, char const *str2);
char				*ft_strcpy(char *cpy, char const *str);
void				ft_strdel(char **as);
char				*ft_strdup(char const *str);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dest, char const *src, size_t num);
size_t				ft_strlen(char const *str);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *dest, char const *src, size_t num);
int					ft_strncmp(char const *str1, char const *str2, size_t num);
char				*ft_strncpy(char *cpy, char const *str, size_t num);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(char const *str1, char const *str2, size_t num);
char				*ft_strrchr(char const *str, int character);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(char const *str1, char const *str2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim_c(char const *s, int i, char c);
char				*ft_strtrim(char const *s);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_wc(char const *s, char c);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_islower(int c);
int					ft_isupper(int c);
void				ft_free2d(char **array);

#endif
