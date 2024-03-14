#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n) {
    const unsigned char *ptr = (const unsigned char *)s;

    for (size_t i = 0; i < n; i++) {
        if (*ptr == (unsigned char)c) {
            return (void *)ptr;
        }
        ptr++;
    }

    return NULL;
}

int main() {
    char str[100];
    char character;

    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", str);

    printf("Ingrese un carácter para buscar en la cadena: ");
    scanf(" %c", &character);

    void *result = ft_memchr(str, character, sizeof(str));

    if (result != NULL) {
        printf("El carácter '%c' fue encontrado en la posición: %ld\n", character, (char *)result - str);
    } else {
        printf("El carácter '%c' no fue encontrado en la cadena.\n", character);
    }

    return 0;
}
