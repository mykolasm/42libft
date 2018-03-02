/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcink <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 10:49:00 by mmarcink          #+#    #+#             */
/*   Updated: 2018/02/26 12:39:06 by mmarcink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef	struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

size_t					ft_strlen(const char *s);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strdup(const char *s1);
char					*ft_strcat(char *s1, const char *s2);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strchr(const char *s, int c);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strncat(char *s1, const char *s2,
size_t n);
char					*ft_strncpy(char *dst, const char *src, size_t len);
char					*ft_strrchr(const char *s, int c);
char					*ft_strnstr(const char *h, const char *n, size_t len);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_atoi(const char *str);
int						ft_isdigit(int d);
int						ft_isalpha(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_toupper(int c);
int						ft_tolower(int c);
void					*ft_memset(void *b, int c, size_t len);
void					*ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *restrict dst, const void *restrict src,
size_t n);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memccpy(void *restrict dst,
const void *restrict src, int c, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
