#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n) {
    while (n-- > 0 && (*s1 != '\0' || *s2 != '\0')) {
        if (*s1 != *s2) {
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }
    return 0;
}

int main() {
    char str1[100], str2[100];
    size_t n;

    printf("Ingrese la primera cadena de caracteres: ");
    scanf("%s", str1);

    printf("Ingrese la segunda cadena de caracteres: ");
    scanf("%s", str2);

    printf("Ingrese el número de caracteres a comparar: ");
    scanf("%zu", &n);

    int result = ft_strncmp(str1, str2, n);

    if (result < 0) {
        printf("'%s' es menor que '%s'\n", str1, str2);
    } else if (result > 0) {
        printf("'%s' es mayor que '%s'\n", str1, str2);
    } else {
        printf("'%s' es igual a '%s'\n", str1, str2);
    }

    return 0;
}
