
#include "libft.h"
//#include <stdio.h>

int ft_isprint(int c) {
    return (c >= 32 && c <= 126);
}

/*
int main() {
    int character;

    printf("Ingrese un carácter: ");
    scanf("%c", &character);

    if (ft_isprint(character)) {
        printf("%c es un carácter imprimible.\n", character);
    } else {
        printf("%c no es un carácter imprimible.\n", character);
    }

    return 0;
}*/
