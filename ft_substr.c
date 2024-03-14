/*#include <stdio.h>
#include <stdlib.h> // Necesario para malloc y free*/

char *ft_substr(const char *s, unsigned int start, size_t len) {
    size_t s_len = 0;
    while (s[s_len] != '\0') {
        s_len++;
    }

    // Si start está más allá del final de la cadena o len es 0, devolvemos una cadena vacía
    if (start >= s_len || len == 0) {
        char *empty_str = (char *)malloc(sizeof(char));
        if (empty_str == NULL) {
            return NULL; // Si la asignación de memoria falla, devolvemos NULL
        }
        empty_str[0] = '\0';
        return empty_str;
    }

    // Ajustamos len para asegurarnos de no exceder la longitud de la cadena
    if (len > s_len - start) {
        len = s_len - start;
    }

    // Asignamos memoria para la nueva subcadena, incluyendo espacio para el carácter nulo
    char *substr = (char *)malloc((len + 1) * sizeof(char));

    if (substr == NULL) {
        return NULL; // Si la asignación de memoria falla, devolvemos NULL
    }

    // Copiamos la subcadena en la nueva ubicación de memoria
    for (size_t i = 0; i < len; i++) {
        substr[i] = s[start + i];
    }
    substr[len] = '\0'; // Añadimos el carácter nulo al final de la subcadena

    return substr;
}

/*int main() {
    char str[100];
    unsigned int start;
    size_t len;

    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", str);

    printf("Ingrese el índice de inicio: ");
    scanf("%u", &start);

    printf("Ingrese la longitud de la subcadena: ");
    scanf("%zu", &len);

    // Llama a ft_substr para obtener la subcadena
    char *substring = ft_substr(str, start, len);

    if (substring == NULL) {
        printf("La asignación de memoria ha fallado.\n");
    } else {
        printf("La subcadena es: %s\n", substring);
        // Liberar la memoria asignada
        free(substring);
    }

    return 0;
}*/
