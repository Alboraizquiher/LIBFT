#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h> // Necesario para malloc y free*/

char **ft_split(char const *s, char c) {
    char **result = NULL;
    size_t words = 0;
    size_t start = 0;

    // Contar el número de palabras y asignar memoria para el array de cadenas
    while (*s != '\0') {
        if (*s == c || *(s + 1) == '\0') {
            if (*(s + 1) == '\0' && *s != c)
                words++;
            if (s - start > 0)
                words++;
        }
        s++;
    }

    result = (char **)malloc((words + 1) * sizeof(char *));
    if (result == NULL)
        return NULL;

    size_t word_index = 0;
    size_t word_len = 0;
    s = s - words; // Restaurar el puntero al inicio de la cadena

    // Dividir la cadena en palabras y copiar cada palabra en el array de cadenas
    while (*s != '\0') {
        if (*s == c || *s == '\0') {
            if (word_len > 0) {
                result[word_index] = (char *)malloc((word_len + 1) * sizeof(char));
                if (result[word_index] == NULL) {
                    // Liberar memoria si falla la asignación
                    for (size_t j = 0; j < word_index; j++)
                        free(result[j]);
                    free(result);
                    return NULL;
                }
                // Copiar la palabra en el array de cadenas
                for (size_t j = 0; j < word_len; j++)
                    result[word_index][j] = s[j - word_len];
                result[word_index][word_len] = '\0';
                word_index++;
                word_len = 0;
            }
        } else {
            word_len++;
        }
        s++;
    }

    result[words] = NULL;
    return result;
}

/*int main() {
    char str[] = "Splitting a string using ft_split function";
    char **words = ft_split(str, ' ');

    if (words == NULL) {
        printf("La asignación de memoria ha fallado.\n");
        return 1;
    }

    printf("Palabras separadas:\n");
    for (int i = 0; words[i] != NULL; i++) {
        printf("%s\n", words[i]);
        free(words[i]);
    }

    free(words);

    return 0;
}*/
