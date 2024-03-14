

#include "libft.h"
//#include <stdio.h>

int ft_isdigit(char c) {
    return (c >= '0' && c <= '9');
}

/*
int main() {
    char character;

    printf("Ingrese un caracter: ");
    scanf(" %c", &character);

    if (ft_isdigit(character)) {
        printf("%c es un dígito.\n", character);
    } else {
        printf("%c no es un dígito.\n", character);
    }

    return 0;
}*/