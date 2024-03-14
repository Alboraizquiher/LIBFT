

#include "libft.h"
//#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n) {
    char *dest_ptr = (char *)dest;
    const char *src_ptr = (const char *)src;
    for (size_t i = 0; i < n; i++) {
        dest_ptr[i] = src_ptr[i];
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

    printf("Antes de memcpy: src = %s, dest = %s\n", src, dest);

    ft_memcpy(dest, src, n);

    printf("Después de memcpy: src = %s, dest = %s\n", src, dest);

    return 0;
}*/