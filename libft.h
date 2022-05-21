#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>

int	ft_atoi(const char *str);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_tolower(int c);
int ft_toupper(int c);
void *ft_memset(void *str, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
char *ft_strchr(const char *str, int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlen(const char *str);
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strrchr(const char *str, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
void ft_bzero(void *s, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void *ft_memmove(void *dest, const void *src, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void *ft_calloc(size_t nitems, size_t size);
char	*ft_strdup(const char *src);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);

#endif
