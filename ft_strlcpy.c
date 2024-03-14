
#include "libft.h"
//#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size) {
    size_t src_len = 0;
    
    // Calculamos la longitud de la cadena de origen
    while (src[src_len] != '\0') {
        src_len++;
    }
    
    // Copiamos los caracteres desde src a dest, asegurándonos de no sobrepasar size - 1
    size_t i;
    for (i = 0; i < size - 1 && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    
    // Añadimos el carácter nulo al final de dest
    dest[i] = '\0';
    
    // Retornamos la longitud de la cadena de origen
    return src_len;
}

/*int main() {
    char src[100], dest[100];
    size_t size;

    printf("Ingrese una cadena de caracteres para src: ");
    scanf("%s", src);

    printf("Ingrese el tamaño del buffer para copiar: ");
    scanf("%zu", &size);

    printf("Antes de strlcpy: src = %s, dest = %s\n", src, dest);

    size_t copied = ft_strlcpy(dest, src, size);

    printf("Después de strlcpy: src = %s, dest = %s, Copiado = %zu\n", src, dest, copied);

    return 0;
}*/
