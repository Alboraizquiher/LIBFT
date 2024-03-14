#include <stdio.h>
#include <stdlib.h> // Necesario para malloc y free
#include <string.h> // Necesario para strlen

char *ft_strjoin(const char *s1, const char *s2) {
    size_t s1_len = strlen(s1);
    size_t s2_len = strlen(s2);

    // Asignamos memoria para la nueva cadena, incluyendo espacio para el carácter nulo
    char *result = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));

    if (result == NULL) {
        return NULL; // Si la asignación de memoria falla, devolvemos NULL
    }

    // Copiamos la primera cadena en la nueva ubicación de memoria
    strcpy(result, s1);

    // Concatenamos la segunda cadena al final de la primera
    strcat(result, s2);

    return result;
}

int main() {
    char s1[100], s2[100];

    printf("Ingrese la primera cadena de caracteres: ");
    scanf("%s", s1);

    printf("Ingrese la segunda cadena de caracteres: ");
    scanf("%s", s2);

    // Llama a ft_strjoin para concatenar las cadenas
    char *joined = ft_strjoin(s1, s2);

    if (joined == NULL) {
        printf("La asignación de memoria ha fallado.\n");
    } else {
        printf("Las cadenas concatenadas son: %s\n", joined);
        // Liberar la memoria asignada
        free(joined);
    }

    return 0;
}
