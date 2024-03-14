#include "libft.h"
//#include <stdio.h>

int ft_toupper(int c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

/*int main() {
    char character;

    printf("Ingrese un caracter en minúscula: ");
    scanf("%c", &character);

    int result = ft_toupper(character);

    if (result != character) {
        printf("El caracter en mayúscula es: %c\n", result);
    } else {
        printf("El caracter ingresado ya está en mayúscula o no es una letra minúscula.\n");
    }

    return 0;
}*/
