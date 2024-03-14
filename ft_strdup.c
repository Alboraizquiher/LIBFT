#include <stdio.h>
#include <stdlib.h> // Necesario para malloc y free

char *ft_strdup(const char *src) {
    // Primero, calculamos la longitud de la cadena de origen
    size_t src_len = 0;
    while (src[src_len] != '\0') {
        src_len++;
    }

    // Asignamos memoria para la nueva cadena, incluyendo espacio para el carácter nulo
    char *dest = (char *)malloc((src_len + 1) * sizeof(char));

    if (dest == NULL) {
        return NULL; // Si la asignación de memoria falla, devolvemos NULL
    }

    // Copiamos la cadena de origen en la nueva ubicación de memoria
    for (size_t i = 0; i <= src_len; i++) {
        dest[i] = src[i];
    }

    return dest;
}

int main() {
    char src[100];

    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", src);

    // Llama a ft_strdup para duplicar la cadena
    char *duplicate = ft_strdup(src);

    if (duplicate == NULL) {
        printf("La asignación de memoria ha fallado.\n");
    } else {
        printf("La cadena duplicada es: %s\n", duplicate);
        // Liberar la memoria asignada
        free(duplicate);
    }

    return 0;
}
