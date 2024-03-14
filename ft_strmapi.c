#include "libft.h"
//#include <stdlib.h> // Para malloc

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    if (s == NULL || f == NULL)
        return NULL;

    // Determinar la longitud de la cadena
    unsigned int len = 0;
    while (s[len] != '\0')
        len++;

    // Asignar memoria para la nueva cadena
    char *result = (char *)malloc((len + 1) * sizeof(char));
    if (result == NULL)
        return NULL;

    // Aplicar la función a cada carácter de la cadena y almacenar el resultado en la nueva cadena
    for (unsigned int i = 0; i < len; i++)
        result[i] = f(i, s[i]);
    
    // Agregar el carácter nulo al final de la cadena
    result[len] = '\0';

    return result;
}

/*int main() {
    char str[] = "Hello, World!";

    // Función de mapeo: agregar un valor numérico al código ASCII de cada carácter
    char *result = ft_strmapi(str, &add_value);

    if (result == NULL) {
        printf("Error: Fallo en la asignación de memoria.\n");
        return 1;
    }

    printf("Cadena original: %s\n", str);
    printf("Cadena modificada: %s\n", result);

    free(result);

    return 0;
}*/
