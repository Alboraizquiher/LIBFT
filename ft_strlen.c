#include "libft.h"
//#include <stdio.h>

size_t ft_strlen(const char *str) {
    size_t length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

/*int main() {
    char str[100];

    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", str);

    size_t length = ft_strlen(str);

    printf("La longitud de la cadena es: %zu\n", length);

    return 0;
}*/
