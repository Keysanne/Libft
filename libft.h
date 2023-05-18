/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:03:06 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/19 14:08:58 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# ifndef FD_LIMITS
#  define FD_LIMITS 1024
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

typedef struct s_gnl
{
	char			*content;
	struct s_gnl	*next;
}				t_gnl;

int		ft_atoi(const char *nptr);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_printf(const char *s, ...);
int		ft_putchar2_fd(char c, int fd);
int		format_s(char *str);
int		format_d(int nb);
int		format_u(unsigned int nb);
int		format_x(int nb, char s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c );
int		ft_toupper(int c);
int		format_p(va_list stk);
int		ft_lstsize(t_list *lst);
int		is_valid(t_gnl *reste);
char	*get_next_line_bonus(int fd);
char	*ft_itoa(int nb);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(const char *str, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbrbase_fd(int n, int fd, char *base, int *i);
void	ft_putnbrunsigned(unsigned int nb, int *i);
void	ft_putnbradress(unsigned long n, char *base, int *i);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	lire_et_stock(int fd, t_gnl **reste);
void	add_reste(t_gnl **reste, char *lu, int ret);
void	taille_ligne(t_gnl *reste, char **ligne);
void	get_ligne(char **ligne, t_gnl *reste);
void	clean_reste(t_gnl **reste);
void	free_reste(t_gnl *reste);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
t_gnl	*get_last(t_gnl *reste);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstlast(t_list *lst);

#endif
