#include "libft.h"
//#include <stdio.h>

char *ft_strrchr(const char *str, int c) {
    const char *last_occurrence = NULL;

    while (*str != '\0') {
        if (*str == c) {
            last_occurrence = str;
        }
        str++;
    }

    if (c == '\0') {
        return (char *)str;
    }

    return (char *)last_occurrence;
}

/*int main() {
    char str[100];
    char character;

    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", str);

    printf("Ingrese un carácter para buscar en la cadena: ");
    scanf(" %c", &character);

    char *result = ft_strrchr(str, character);

    if (result != NULL) {
        printf("La última aparición del carácter '%c' fue encontrada en la posición: %ld\n", character, result - str);
    } else {
        printf("El carácter '%c' no fue encontrado en la cadena.\n", character);
    }

    return 0;
}*/
