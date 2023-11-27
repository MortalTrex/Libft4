#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
int	ft_isalpha(int c);
char	ft_toupper(char c);
char	ft_tolower(char c);
char	*ft_strchr(char *str, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int	ft_strlen(char *str);
size_t ft_strlcat(char * dst, const char * src, size_t dstsize);
int	ft_strlen(char *str);
void  ft_bzero(void *str, size_t n);
int	ft_atoi(const char *str);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memset(void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);

void ft_putnbr_fd(int n, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putchar_fd(char c, int fd);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_itoa(int n);
char **ft_split(char const *s, char c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_substr(char const *s, unsigned int start, size_t len);