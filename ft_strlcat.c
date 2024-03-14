#include "libft.h"
//#include <stdio.h>

size_t ft_strlcat(char *dest, const char *src, size_t size) {
    size_t dest_len = 0;
    size_t src_len = 0;
    size_t i, j;

    // Calculamos la longitud de dest
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    // Calculamos la longitud de src
    while (src[src_len] != '\0') {
        src_len++;
    }

    size_t total_len = dest_len + src_len;

    if (size <= dest_len)
        return src_len + size;

    for (i = dest_len, j = 0; i < size - 1 && src[j] != '\0'; i++, j++) {
        dest[i] = src[j];
    }

    dest[i] = '\0';

    return total_len;
}


/*int main() {
    char dest[100] = "Hello ";
    const char src[] = "world!";
    size_t size = 100;

    printf("Antes de strlcat: dest = %s, src = %s\n", dest, src);

    size_t total_len = ft_strlcat(dest, src, size);

    printf("Después de strlcat: dest = %s, src = %s, Total = %zu\n", dest, src, total_len);

    return 0;
}*/
