
#include "libft.h"
//#include <stdio.h>

void ft_bzero(void *s, size_t n) {
    unsigned char *ptr = (unsigned char *)s;
    while (n-- > 0) {
        *ptr++ = 0;
    }
}

/*
int main() {
    char str[100];
    size_t n;

    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", str);

    printf("Ingrese el número de bytes para bzero: ");
    scanf("%zu", &n);

    printf("Antes de bzero: %s\n", str);

    ft_bzero(str, n);

    printf("Después de bzero: %s\n", str);

    return 0;
}*/
