// Created by  : Raphael GRACA RIBEIRO
// GitHub      : rgraca-ribeiro

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>


size_t  ft_strlen(const char *s);
char    *ft_strdup(const char *s);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strncpy(char *dest, const char *src, size_t n);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
// char    *ft_strstr(const char *haystack, const char *needle);

#endif
