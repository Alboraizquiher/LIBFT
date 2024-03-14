#include <stdio.h>

void *ft_memset(void *s, int c, size_t n) {
    unsigned char *ptr = (unsigned char *)s;
    while (n-- > 0) {
        *ptr++ = (unsigned char)c;
    }
    return s;
}

int main() {
    char str[100];
    int c;
    size_t n;

    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", str);

    printf("Ingrese el valor para llenar la memoria: ");
    scanf("%d", &c);

    printf("Ingrese el número de bytes para llenar: ");
    scanf("%zu", &n);

    printf("Antes de memset: %s\n", str);

    ft_memset(str, c, n);

    printf("Después de memset: %s\n", str);

    return 0;
}
