#include <stdio.h>

char *ft_strchr(const char *str, int c) {
    while (*str != '\0') {
        if (*str == c) {
            return (char *)str;
        }
        str++;
    }
    if (c == '\0') {
        return (char *)str;
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

    char *result = ft_strchr(str, character);

    if (result != NULL) {
        printf("El carácter '%c' fue encontrado en la posición: %ld\n", character, result - str);
    } else {
        printf("El carácter '%c' no fue encontrado en la cadena.\n", character);
    }

    return 0;
}
