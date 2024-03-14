#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char *)) {
    if (s == NULL || f == NULL)
        return;

    // Iterar sobre la cadena y aplicar la función a cada carácter
    unsigned int i = 0;
    while (*s) {
        f(i, s);
        s++;
        i++;
    }
}

int main() {
    // Función de ejemplo: imprimir el carácter y su índice
    void print_index(unsigned int index, char *c) {
        printf("Carácter en la posición %u: %c\n", index, *c);
    }

    char str[] = "hello";

    // Aplicar la función print_index a cada carácter de la cadena
    ft_striteri(str, &print_index);

    return 0;
}
