#include <stdio.h>
#include "libft.h"

void printDouble(char **text)
{
    printf("Result: %s\n", *text);
}

int main()
{
    // printSimple(tab);
    // printDouble(&table);
    char **ptr;
    char *string;
    char *salut;

    ptr = ft_memalloc(6);
    string = ft_memalloc(6);
    ft_strcpy(string, "Salut");
    
    salut = ft_memalloc(6);
    ft_strcpy(salut, "string");
    
    ptr = &string;
    ptr++;
    printDouble(ptr);
    // printf("char: %s", string);
    return (0);
}
