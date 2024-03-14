#include "libft.h"
//#include <stdio.h>

int ft_tolower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

/*int main() {
    char character;

    printf("Ingrese un caracter en mayúscula: ");
    scanf("%c", &character);

    int result = ft_tolower(character);

    if (result != character) {
        printf("El caracter en minúscula es: %c\n", result);
    } else {
        printf("El caracter ingresado ya está en minúscula o no es una letra mayúscula.\n");
    }

    return 0;
}*/
