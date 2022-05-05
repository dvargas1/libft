#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>

int ft_isalpha(int c);
int ft_isascii(int c);
size_t ft_strlen(const char *str);
void *ft_memset(void *str, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *str1, const char *str2, size_t n);


#endif
