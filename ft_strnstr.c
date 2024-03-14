#include "libft.h"
//#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t n) {
    size_t needle_len = 0;
    while (needle[needle_len] != '\0')
        needle_len++;

    if (needle_len == 0)
        return (char *)haystack;

    size_t haystack_len = 0;
    while (haystack[haystack_len] != '\0' && haystack_len < n) {
        size_t i = 0;
        while (haystack[haystack_len + i] == needle[i] && haystack_len + i < n) {
            if (i == needle_len - 1)
                return (char *)&haystack[haystack_len];
            i++;
        }
        haystack_len++;
    }
    return NULL;
}

/*int main() {
    char haystack[100], needle[100];
    size_t n;

    printf("Ingrese la cadena de caracteres (haystack): ");
    scanf("%s", haystack);

    printf("Ingrese la subcadena a buscar (needle): ");
    scanf("%s", needle);

    printf("Ingrese el número de caracteres a buscar: ");
    scanf("%zu", &n);

    char *result = ft_strnstr(haystack, needle, n);

    if (result != NULL) {
        printf("La subcadena '%s' fue encontrada en la posición: %ld\n", needle, result - haystack);
    } else {
        printf("La subcadena '%s' no fue encontrada en la cadena.\n", needle);
    }

    return 0;
}*/
