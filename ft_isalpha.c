
#include "libft.h"
//#include <stdio.h>

int ft_isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
int main() {
    char character;
    
    printf("Ingrese un caracter: ");
    scanf("%c", &character);
    
    if (ft_isalpha(character)) {
        printf("%c es una letra alfabetica.\n", character);
    } else {
        printf("%c no es una letra alfabetica.\n", character);
    }
    
    return 0;
}*/
