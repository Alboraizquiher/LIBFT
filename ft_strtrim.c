#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h> // Necesario para malloc*/

char *ft_strtrim(char const *s1, char const *set) {
    // Encuentra la longitud de s1
    size_t len = 0;
    while (s1[len] != '\0') {
        len++;
    }

    size_t start = 0;
    size_t end = len - 1;

    // Encuentra el índice del primer caracter que no está en el conjunto "set"
    while (s1[start] != '\0' && strchr(set, s1[start]) != NULL)
        start++;
    
    // Encuentra el índice del último caracter que no está en el conjunto "set"
    while (end > start && strchr(set, s1[end]) != NULL)
        end--;

    // Calcula la longitud de la subcadena sin los caracteres del conjunto "set"
    size_t trimmed_len = end - start + 1;

    // Asignamos memoria para la nueva cadena, incluyendo espacio para el carácter nulo
    char *trimmed_str = (char *)malloc((trimmed_len + 1) * sizeof(char));

    if (trimmed_str == NULL) {
        return NULL; // Si la asignación de memoria falla, devolvemos NULL
    }

    // Copiamos la subcadena sin los caracteres del conjunto "set" en la nueva ubicación de memoria
    for (size_t i = 0; i < trimmed_len; i++) {
        trimmed_str[i] = s1[start + i];
    }
    trimmed_str[trimmed_len] = '\0'; // Agregamos el carácter nulo al final

    return trimmed_str;
}

/*int main() {
    char s1[100], set[100];

    printf("Ingrese una cadena de caracteres: ");
    scanf("%[^\n]", s1);
    getchar(); // Consumir el salto de línea

    printf("Ingrese el conjunto de caracteres a eliminar: ");
    scanf("%[^\n]", set);

    // Llama a ft_strtrim para eliminar los caracteres del conjunto "set" al principio y al final de la cadena
    char *trimmed = ft_strtrim(s1, set);

    if (trimmed == NULL) {
        printf("La asignación de memoria ha fallado.\n");
    } else {
        printf("La cadena sin los caracteres del conjunto \"%s\" al principio y al final es: %s\n", set, trimmed);
        // Liberar la memoria asignada
        free(trimmed);
    }

    return 0;
}*/