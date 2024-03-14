
#include "libft.h"
//#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *ptr1 = (const unsigned char *)s1;
    const unsigned char *ptr2 = (const unsigned char *)s2;

    for (size_t i = 0; i < n; i++) {
        if (*ptr1 != *ptr2) {
            return *ptr1 - *ptr2;
        }
        ptr1++;
        ptr2++;
    }

    return 0;
}

/*
int main() {
    char str1[100], str2[100];
    size_t n;

    printf("Ingrese la primera cadena de caracteres: ");
    scanf("%s", str1);

    printf("Ingrese la segunda cadena de caracteres: ");
    scanf("%s", str2);

    printf("Ingrese el número de bytes a comparar: ");
    scanf("%zu", &n);

    int result = ft_memcmp(str1, str2, n);

    if (result < 0) {
        printf("'%s' es menor que '%s'\n", str1, str2);
    } else if (result > 0) {
        printf("'%s' es mayor que '%s'\n", str1, str2);
    } else {
        printf("'%s' es igual a '%s'\n", str1, str2);
    }

    return 0;
}*/
