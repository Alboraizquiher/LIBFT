

#include "libft.h"
//#include <stdio.h>

int ft_isalnum(char c) {
    return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
int main() {
    char character;

    printf("Ingrese un caracter: ");
    scanf(" %c", &character);

    if (ft_isalnum(character)) {
        printf("%c es un dígito o una letra alfabética.\n", character);
    } else {
        printf("%c no es un dígito ni una letra alfabética.\n", character);
    }

    return 0;
}*/