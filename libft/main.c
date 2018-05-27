// /mnt/c/Users/Raphael/Desktop/github/ecole_42
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"


char printChar(unsigned int i, char c);

int main(void)
{
    // int c = 97; 
    // size_t i = 50;
    // char dest[] = "This is america";
    // char src[] = "This a is car withoot to a bota";
    // char mem[] = "Salut les copains";
    // char mem2[] = "Salut les copains";

    // ft_memset()
    // memset(mem, 'a', 1);
    // ft_memset(mem, 'a', 5);
    // printf("mem: %s\n", mem);

    // ft_bzero()
    // bzero(mem, 10);
    // ft_bzero(mem, 4);
    // for (int i = 0; i < 20; i++)
    //      printf("mem: %d\n", mem[i]);

    // ft_memcpy()
    // memcpy(mem, mem2, 50);
    // ft_memcpy(mem, mem2, 50);
    // printf("mem: %s\n", mem);

    // ft_memccpy()
    // memccpy(mem, mem2, 'x', 0);
    // ft_memccpy(mem, mem2, 'x', 0);
    // printf("mem: %s\n", mem);

    // ft_memmove()
    // memmove(mem, mem2, 10);
    // ft_memmove(mem, mem2, 10);
    // printf("mem: %s\n", mem);
    
    // ft_memchr()
    // printf("mem: %d\n", memchr(mem, '1', 10));
    // printf("ft_mem: %s\n", ft_memchr(mem, '1', 10));

    // ft_memcmp()
    // printf("mem: %d\n", memcmp("", "", 10));
    // printf("ft_mem: %d\n", ft_memcmp("", "", 10));

    // ft_strlen()
    // printf("ft_strlen() -> %d\n", ft_strlen("Il était une fois la vie"));
    // printf("strlen()    -> %d\n", strlen("Il était une fois la vie"));

    // ft_strdup()
    // printf("ft_strdup() -> %s\n", ft_strdup("Je fais genre je suis trop chaud"));
    // printf("strdup()    -> %s\n", strdup("Je fais genre je suis trop chaud"));
    
    // ft_strdup()
    // printf("ft_strcpy() -> %s\n", ft_strcpy(dest, src));
    // printf("strcpy()    -> %s\n", strcpy(dest, src));
    
    // ft_strdup()
    // printf("ft_strncpy() -> %s\n", ft_strncpy(dest, src, i));
    // printf("strncpy()    -> %s\n", strncpy(dest, src, i));

    // ft_strcat()
    // printf("ft_strcat() -> %s\n", ft_strcat(dest, src));
    // printf("strcat()    -> %s\n", strcat(dest, src));    

    // ft_strncat()
    // printf("ft_strncat() -> %s\n", ft_strncat(dest, src, i));
    // printf("strncat()    -> %s\n", strncat(dest, src, i));    

    // ft_strchr()
    // printf("ft_strchr() -> %s\n", ft_strchr(src, '\0'));
    // printf("strchr()    -> %s\n", strchr(src, '\0'));    

    // ft_strrchr()
    // printf("ft_strrchr() -> %s\n", ft_strrchr(src, '\0'));
    // printf("strrchr()    -> %s\n", strrchr(src, '\0'));    

    // ft_strstr()
    // printf("ft_strstr() -> %s\n", ft_strstr("Il était une fois la vie", "u"));
    // printf("strstr()    -> %s\n", strstr("Il était une fois la vie", "u"));

    // ft_strnstr()
    // printf("ft_strnstr() -> %s\n", ft_strnstr("Il était une fois la vie", "unes", 10));
    // printf("strnstr()    -> %s\n", strnstr("Il était une fois la vie", "une fois", 3));

    // ft_strcmp()
    // printf("ft_strcmp() -> %d\n", ft_strcmp("a z", "a z "));
    // printf("strcmp()    -> %d\n", strcmp("a z", "a z "));

    // ft_strncmp()
    // printf("ft_strncmp() -> %d\n", ft_strncmp("", "aze", 20));
    // printf("strncmp()    -> %d\n", strncmp("", "aze", 20));    

    // ft_atoi()
    // printf("ft_atoi() -> %d\n", ft_atoi("   -1213 12 a 12"));
    // printf("atoi()    -> %d\n", atoi("  -1213  12a 12"));    

    // ft_isalpha()
    // printf("ft_isalpha() -> %d\n", ft_isalpha('a'));
    // printf("isalpha()    -> %d\n", isalpha('a'));
    
    // ft_isdigit()
    // printf("ft_isdigit() -> %d\n", ft_isdigit('0'));
    // printf("isdigit()    -> %d\n", isdigit('0'));
    
    // ft_isalnum()
    // printf("ft_isalnum() -> %d\n", ft_isalnum('/'));
    // printf("isalnum()    -> %d\n", isalnum('/'));
    
    // ft_isascii()
    // printf("ft_isascii() -> %d\n", ft_isascii(108));
    // printf("isascii()    -> %d\n", isascii(108));
    
    // ft_isprint()
    // printf("ft_isprint() -> %d\n", ft_isprint(42));
    // printf("isprint()    -> %d\n", isprint(42));

    // ft_toupper()
    // printf("ft_toupper() -> %c\n", ft_toupper('Z'));
    // printf("toupper()    -> %c\n", toupper('Z'));

    // ft_tolower()
    // printf("ft_tolower() -> %c\n", ft_tolower('8'));
    // printf("tolower()    -> %c\n", tolower('8'));
    
    // PART II

    // ft_memalloc()
    // char *ptr = ft_memalloc(5);
    // for (int i = 0; i < 20; i++)
    // {
    //     printf("ft_memalloc() -> %d\n", ptr[i]);
    // }

    // ft_memdel()
    // char *ptr = ft_memalloc(5);
    // printf("1 ->\n");
    // for (int i = 0; i < 10; i++)
    //     printf("ptr: %d\n", ptr[i]);
    // ft_memdel((void*)&ptr);
    // ptr = ft_memalloc(2);
    // printf("2 ->\n");    
    // for (int i = 0; i < 10; i++)
    //     printf("ptr: %d\n", ptr[i]);

    // ft_strnew()
    // char *ptr = ft_strnew(5);
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("ft_strnew() -> %c\n", ptr[i]);
    // }

    // ft_strdel()
    // char *ptr = ft_strnew(5);
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("ft_strdel() -> %c\n", ptr[i]);
    // }
    // ft_strdel(&ptr);

    // ft_strclr()
    // char ptr[] = "Salut les copains";
    // printf("ft_strclr() -> %s\n", ptr);
    // ft_strclr(ptr);
    // printf("ft_strclr() -> %s\n", ptr);

    // ft_striter()
    // char ptr[] = "Salut les copains";
    // ft_striter(ptr, printChar);

    // ft_striteri()
    // char ptr[] = "Salut les copains";
    // ft_striteri(ptr, printChar);

    // ft_strmap()
    // char ptr[] = "Salut les copains";
    // char *str;
    // printf("Before Str: %s\n", str);
    // str = ft_strmap(ptr, printChar);
    // printf("After Str: %s\n", str);

    // ft_strmapi()
    // char ptr[] = "Salut les copains";
    // char *str;
    // printf("Before Str: %s\n", str);
    // str = ft_strmapi(ptr, printChar);
    // printf("After Str: %s\n", str);
    // ft_strdel(&str);
    // printf("After Str: %s\n", str);
    
    // ft_strequ()
    // printf("Value: %d\n", ft_strequ("Salu les copains", "Salut les copains"));
    
    // ft_strnequ()
    // printf("Value: %d\n", ft_strnequ("Sslut les copains", "Salut les copains", 6));
    
    // ft_strsub()
    // printf("Value: %s\n", ft_strsub("Salut les copains", 2, 10));
    
    // ft_strjoin()
    // char *ptr;
    // printf("Value: %s\n", ft_strjoin("Bonjour je m'appel ", "Raphael"));
    // ptr = ft_strjoin("Bonjour je m'appel ", "Raphael");
    // for (int i = 0; i < 50; i++)
    //     printf("Value: %c\n", ptr[i]);
    // return(0);

    // ft_strtrim()
    // printf("Value: %s\n", ft_strtrim('\0'));

}

char printChar(unsigned int i, char c)
{
    printf("int: %d char: %c\n", i, c);
    return (c);
}
