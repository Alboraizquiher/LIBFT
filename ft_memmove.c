
#include "libft.h"
//#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n) {
    char temp[n];
    const char *src_ptr = (const char *)src;
    char *dest_ptr = (char *)dest;

    for (size_t i = 0; i < n; i++) {
        temp[i] = src_ptr[i];
    }

    for (size_t i = 0; i < n; i++) {
        dest_ptr[i] = temp[i];
    }

    return dest;
}

/*
int main() {
    char src[100], dest[100];
    size_t n;

    printf("Ingrese una cadena de caracteres para src: ");
    scanf("%s", src);

    printf("Ingrese el número de bytes para copiar: ");
    scanf("%zu", &n);

    printf("Antes de memmove: src = %s, dest = %s\n", src, dest);

    ft_memmove(dest, src, n);

    printf("Después de memmove: src = %s, dest = %s\n", src, dest);

    return 0;
}*/