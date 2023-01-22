#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
    void    *content;
    struct s_list  *next;
}   t_list;

int ft_isalpha(int str);
int ft_digit(int str);
int ft_isalnum(int str);
int ft_isprint(int str);
size_t  ft_strlen(const char *str);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t  strlcpy(char *dst, const char *src, size_t dstsize);

#endif
