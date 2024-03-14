#include "libft.h"
#include <stdio.h>

int ft_isascii(int c) {
    return (c >= 0 && c <= 127);
}

int main() {
    int value;

    printf("Ingrese un valor entero: ");
    scanf("%d", &value);

    if (ft_isascii(value)) {
        printf("%d es un valor ASCII válido.\n", value);
    } else {
        printf("%d no es un valor ASCII válido.\n", value);
    }

    return 0;
}
